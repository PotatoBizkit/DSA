#include<stdio.h>

void name(int num){
    // tc = o(N) sc = O(N)
    char nam[] = "chetan";
    if (num <= 0)
        return;

    printf("%s ", nam);
    name(num - 1);
}

int main(){
    int num;
    printf("Enter an integer:\n");
    scanf("%d", &num);

    name(num);
    return 0;
}