#include<stdio.h>

void p(int n){
    
    for (int i = 0; i < n; i++)
    {
        int p = 65;
        for (int j = 0; j < n-i-1; j++)
        {
            printf(" ");
        }
        
        for (int j = 0; j < (2*i)+1; j++)
        {
            if (j<=((2*i)+1)/2)
            {
                printf("%c", p);
                p++;
            }
            else
            {
                p--;
                printf("%c", p-1);
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