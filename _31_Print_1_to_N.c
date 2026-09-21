#include<stdio.h>

void pnum(int num, int i){
    // // forward recursion O(N) O(N)
    // if (num<=0)
    //     return;
    // printf("%d\n", i);
    // pnum(num-1, i+1);

    // backtracking
    
}

int main(){
    int num, i=1;
    printf("Enter an integer:\n");
    scanf("%d", &num);

    pnum(num, i);
    return 0;
}