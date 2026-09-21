#include<stdio.h>

void gcd(int m, int n){
    // // Better approach
    // int min;
    // if(m>n){
    //     min = n;
    // }
    // else
    // {
    //     min = m;
    // }
    // for (int i = min; i > 0; i--)
    // {
    //     if ((m%i==0) && (n%i==0))
    //     {
    //         printf("%d is GCD\n", i);
    //         break;
    //     }
    // }

    // optimal approach
    while ((m != 0) && (n != 0))
    {
        if(m>n){
            m = m%n;
        }
        else
        {
            n = n%m;
        }
    }
    
    if(m == 0){
        printf("%d is GCD\n", n);
    }
    else
    {
        printf("%d is GCD\n", m);
    }
    
}

int main(){
    int fn, sn;
    printf("Enter first nummber:\n");
    scanf("%d", &fn);
    printf("Enter second nummber:\n");
    scanf("%d", &sn);
    gcd(fn, sn);
    return 0;
}