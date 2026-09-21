#include<stdio.h>

void p(int n){
    for (int i = 0; i < n; i++)
    {int p = 65;
        for (int j = 0; j < n-i; j++)
        {
            printf("%c", p);
            p++;
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