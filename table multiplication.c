#include <stdio.h>

int main () {
    int n;
    int i; 

    printf("Please enter your number:");
    scanf("%d", &n);
    for(i = 1; i <= 10; i++) {
    printf("%d multiplies by %d= %d\n", n, i, n*i);
    }
    getch();
    return 0;
}