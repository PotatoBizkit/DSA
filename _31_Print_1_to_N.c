#include<stdio.h>

void pnum(int num, int i){
    // // forward recursion O(N) O(N)
    // if (i>num)
    // {
    //     return;
    // }
    // printf("%d\n", i);
    // pnum(num, i+1);

    // backtracking O(N) O(N)
    if (i>num)
    {
        return;
    }
    pnum(num, i+1);
    printf("%d\n", num-i+1);
    
}

int main(){
    int num, i=1;
    printf("Enter an integer:\n");
    scanf("%d", &num);

    pnum(num, i);
    return 0;
}