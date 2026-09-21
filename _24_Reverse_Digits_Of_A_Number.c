#include<stdio.h>

int rev(int n){
    int rev_dig=0, rem=n;
    while (rem)
    {
        rev_dig=(rev_dig*10)+(rem%10);
        rem=rem/10;
    }
    printf("%d\n", rev_dig);
}

int main(){
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    rev(n);
    return 0;
    
}