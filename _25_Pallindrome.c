#include<stdio.h>

void pallindrome(int n){
    int d=n, r=0;
    while (n){r = (r*10)+(n%10);n = n/10;}
    if (d==r){printf("Pallindrome!!\n");}
    else{printf("Hot daemn!\n");}
}

int main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    pallindrome(n);
    return 0;
}