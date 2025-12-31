#include <iostream>
using namespace std;

struct AVL {
    int data;
    AVL *left, *right;
    int height;
};

int height(AVL *p) {
    if (p == NULL)
        return 0;
    return p->height;
}

int max(int a, int b) {
    return (a > b) ? a : b;
}

// Create new node
AVL* newNode(int x) {
    AVL *p = new AVL;
    p->data = x;
    p->left = p->right = NULL;
    p->height = 1;
    return p;
}

/* -------- ROTATIONS -------- */

// LL Case → Right Rotation
AVL* AlgoLL(AVL *p) {
    AVL *Q = p->left;
    AVL *temp = Q->right;

    Q->right = p;
    p->left = temp;

    p->height = max(height(p->left), height(p->right)) + 1;
    Q->height = max(height(Q->left), height(Q->right)) + 1;

    return Q;
}

// RR Case → Left Rotation
AVL* AlgoRR(AVL *p) {
    AVL *Q = p->right;
    AVL *temp = Q->left;

    Q->left = p;
    p->right = temp;

    p->height = max(height(p->left), height(p->right)) + 1;
    Q->height = max(height(Q->left), height(Q->right)) + 1;

    return Q;
}

// Balance Factor
int getBalance(AVL *p) {
    if (p == NULL)
        return 0;
    return height(p->left) - height(p->right);
}

/* -------- INSERT -------- */
AVL* insert(AVL *root, int key) {

    // Normal BST insert
    if (root == NULL)
        return newNode(key);

    if (key < root->data)
        root->left = insert(root->left, key);
    else if (key > root->data)
        root->right = insert(root->right, key);
    else
        return root;   // no duplicate

    // Update height
    root->height = 1 + max(height(root->left),height(root->right));
                           

    int balance = getBalance(root);

    // LL Case
    if (balance > 1 && key < root->left->data)
        return AlgoLL(root);

    // RR Case
    if (balance < -1 && key > root->right->data)
        return AlgoRR(root);

    // LR Case
    if (balance > 1 && key > root->left->data) {
        root->left = AlgoRR(root->left);
        return AlgoLL(root);
    }

    // RL Case
    if (balance < -1 && key < root->right->data) {
        root->right = AlgoLL(root->right);
        return AlgoRR(root);
    }

    return root;
}

// Inorder traversal
void inorder(AVL *root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main() {
    AVL *root = NULL;

    root = insert(root, 100);
    root = insert(root, 50);
    root = insert(root, 200);
    root = insert(root, 20);
    root = insert(root, 10);

    cout << "Inorder Traversal: ";
    inorder(root);

    return 0;
}
