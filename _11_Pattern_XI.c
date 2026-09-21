#include<stdio.h>

void p(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            if ((j+i)%2==0)
            {
                printf("1");
            }
            else
            {
                printf("0");
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