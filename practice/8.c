#include <stdio.h>

int main() {
    int n, i = 2, flag = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    if(n <= 1) {
        printf("Not Prime");
        return 0;
    }

    do {
        if(n % i == 0) {
            flag = 1;
            break;
        }
        i++;
    } while(i <= n/2);

    if(flag == 0)
        printf("Prime Number");
    else
        printf("Not Prime");

    return 0;
}