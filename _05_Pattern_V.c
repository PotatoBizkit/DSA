#include<stdio.h>

void Pattern(int n){
    printf("The pattern for input %d is:\n", n);
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main(){
    int n;
    printf("Enter an integer:\n");
    scanf("%d", &n);

    Pattern(n);

    return 0;
}