#include<stdio.h>

void div(int n){
    // // Brute Force
    // for (int i = 1; i <= n; i++){if (n%i==0){printf("%d ", i);}}
    // printf("\n");

    // Optimal
    for (int i = 1; i * i <= n; i++){if (n % i == 0){printf("%d ", i);if (i != n / i) {printf("%d ", n / i);}}}
    printf("\n");
}

int main(){
    int n;
    printf("Enter an integer:\n");
    scanf("%d", &n);
    div(n);
    return 0;
}