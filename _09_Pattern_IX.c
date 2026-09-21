#include<stdio.h>

void d(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < (2*i)+1; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < (2*(n-i))-1; j++)
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

    d(n);

    return 0;
}