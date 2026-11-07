#include <stdio.h>

int main () {
    long long int n; // Changed from int to long long int
    int i; 

    printf("Please enter your number:");
    scanf("%lld", &n); // %lld (long+long+decimal) instead of %d
    for(i = 1; i <= 10; i++) {
        // %lld using for n and n*1
    printf("%lld multiplies by %d= %lld\n", n, i, n*i);
    }
    return 0;
}
