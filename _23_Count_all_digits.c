#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int n, i=0;
    double x;
    printf("Enter a number:\n");
    scanf("%lf", &x);

    // // Brute-Force Approach...
    // while (n)
    // {
    //     n=n/10;
    //     i++;
    //     printf("%d\n", n);
    // }
    // printf("%d\n", i);

    printf("%.0lf\n", floor(log10(x))+1);

    return 0;
    
}