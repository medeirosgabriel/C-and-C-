#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("How many interations do you want? ");
    scanf("%d", &n);
    int signal = -1;
    float pi = 4;
    for (int i = 0; i < n; i++) {
        pi += signal * (4.0/(3 + i*2));
        signal *= -1;
        
    }
    printf("Pi = %.2f", pi);
    return 0;
}