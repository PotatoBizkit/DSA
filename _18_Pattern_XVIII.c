#include<stdio.h>

void p(int n){
    
    for (int i = 0; i < n; i++)
    {
        int p = 65;
        for (int j = 0; j < i+1; j++)
        {
            printf("%c", p+n-1-i+j);
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