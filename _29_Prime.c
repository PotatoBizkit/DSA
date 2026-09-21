#include<stdio.h>

void prime(int num){
    // // brute force O(N)
    // for (int i = 2; i < num; i++)
    // {
        // if (num%i == 0)
        // {
        //     printf("Not prime!\n");
        //     break;
        // }
        // else
        // {
        //     printf("Optimus Prime\n");
        //     break;
        // }
    // }

    // optimal O(rootN)
    for (int i = 2; i*i < num; i++)
    {
        if (num%i == 0)
        {
            printf("Not prime!\n");
            break;
        }
        else
        {
            printf("Optimus Prime\n");
            break;
        }
    }
}

int main(){
    int num;
    printf("Enter an integer:\n");
    scanf("%d", &num);

    prime(num);

    return 0;
}