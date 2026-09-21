#include<stdio.h>

void Pattern(int n){
    printf("The pattern for input %d is:\n", n);
    for (int i = 0; i < n; i++)
    {
        for (int k = n-1; k > i; k--)
        {
            printf(" ");
        }
        for (int j = 1; j <= (2*i)+1; j++)
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