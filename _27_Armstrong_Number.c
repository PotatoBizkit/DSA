#include<stdio.h>
#include<math.h>
void arms(int num){
    int num_dig=0, x=num, sum=0;
    while (x)
    {
        x=x/10;
        num_dig++;
    }
    printf("%d = num of digits\n", num_dig);
    x=num;
    while (x)
    {
        int i=x%10;
        sum += pow(i, num_dig);
        x=x/10;
    }
    printf("%d = sum\n", sum);
    if (sum==num)
    {
        printf("Armstrong!\n");
    }
    else
    {
        printf("Not Armstrong!\n");
    }
}

int main(){
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    arms(num);
    return 0;
}