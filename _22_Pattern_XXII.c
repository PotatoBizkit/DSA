#include<stdio.h>
#include<stdlib.h>

void p(int n){
    int k=n;
    for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < 2 * n - 1; j++) {
            int x = abs(i - (n - 1));
            int y = abs(j - (n - 1));

            printf("%d", (x > y ? x : y) + 1);
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