#include<stdio.h>

void p(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (2*n); j++)
        {
            if (j >= 0 && j < n-i)
            {
                printf("*");
            }
            else if (j > n+i-1 && j < (2*n))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }           
        }        
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (2*n); j++)
        {
            if (j < i+1)
            {
                printf("*");
            }
            else if (j > (2*n)-i-2)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }           
        }        
        printf("\n");
    }
}

int main(){
    int n;
    printf("Enter an integer:\n");
    scanf("%d", &n);

    p(n);

    return 0;
}