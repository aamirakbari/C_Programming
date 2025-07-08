#include<stdio.h>


int main(void)
{
        int num;
        printf("Enter the number : ");
        scanf("%d",&num);

        printf("\b = %d\n",sum_of_digit(num));
        return 0;
}

int sum_of_digit(int num )
{
        int sum;

        if(num / 10 == 0)
        {
//              printf("%d+",num);
                return num;
        }
        sum = (num % 10 ) + sum_of_digit(num / 10);
//      printf("%d+",num%10);
        return sum;
//Aamir test Pana

}



