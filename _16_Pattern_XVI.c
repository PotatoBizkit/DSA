#include<stdio.h>

void p(int n){
    int p = 65;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            printf("%c", p);
            
        }
        printf("\n");
        p++;
    }
}

int main(){
    int n;
    printf("Enter an integer:\n");
    scanf("%d", &n);

    p(n);

    return 0;
}