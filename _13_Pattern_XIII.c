#include<stdio.h>

void p(int n){
    int x=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            printf("%d", x);
            x+=1;
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