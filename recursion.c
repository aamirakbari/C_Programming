#include<stdio.h>

long int factorial(int);
int number_from_N_to_1(int);
int number_from_1_to_N(int);
int number_from_1_to_N_with_sum(int);
int number_from_N_to_1_with_sum(int);
int sum_of_digit_of_number(int);

int main(void)
{
        int choice;
        int num;

        while(1)
        {
                printf("\n1.Find the Factorial\n");
                printf("2.Print numbers from N to 1\n");
                printf("3.Print numbers from 1 to N \n");
                printf("4.Print numbers from 1 to N and there Sum\n");
                printf("5.Print numbers from N to 1 and there Sum\n");
                printf("6.Print Sum of number digits\n");
                printf("50.To exit\n");
                printf("Choose your options : ");
                scanf("%d",&choice);

                if(choice == 50)
                {
                        printf("Bye Bye\n");
                        return;

                }
                switch(choice)
                {
                        case 1 :
                                printf("Enter the Number to find the Factorial : ");
                                scanf("%d",&num);
                                printf("Factorial of %d = %d\n",num,factorial(num));
                                break;

                        case 2 :
                                printf("Enter the number to be print from N to 1 : " );
                                scanf("%d",&num);
                                number_from_N_to_1(num);
                                break;

                        case 3 :
                                printf("Enter the number to be print from 1 to N : ");
                                scanf("%d",&num);
                                number_from_1_to_N(num);
                                break;

                        case 4 :
                                printf("Enter the number to be print from 1 to N and get the sum : ");
                                scanf("%d",&num);
                                printf("\b = %d",number_from_1_to_N_with_sum(num));
                                break;
                        case 5 :
                                printf("Enter the number to be print from N to 1 and get the sum : ");
                                scanf("%d",&num);
                                printf("\b = %d",number_from_N_to_1_with_sum(num));
                                break;

                        case 6 :
                                printf("Enter the number to get the sum of number digit : ");
                                scanf("%d",&num);
                                printf("%d",sum_of_digit_of_number(num));
                                break;

                        default :
                                printf("Please give valid input\n");
                }
        }
        return 0;
}

int sum_of_digit_of_number(int num )
{
        int sum;

        if(num == 0)
                return 0;

        sum = num + sum_of_digit_of_number(num -1);
        return sum;
}

int number_from_N_to_1_with_sum(int num )
{
        int sum;
        if(num == 0)
                return 0;

        printf("%d+",num);
        sum = num + number_from_N_to_1_with_sum(num -1);
        return sum;
}

int number_from_1_to_N_with_sum(int num)
{
        int sum;

        if(num == 0)
                return 0;

        sum = num + number_from_1_to_N_with_sum(num - 1);
        printf("%d+",num);
        return sum;
}
//Functio to print a number from 1 to N (ex 5 -> 1,2,3,4,5)
int number_from_1_to_N(int num)
{
        if(num == 0)
                return 0;

        number_from_1_to_N(num -1);
        printf("%d ",num);
        return 0;
}

//Function to find the factorial of a number n! (3! = 1*2*3)
long int factorial(int num)
{
        if(num == 0)
                return 1;

        return num*factorial(num - 1);
}

//Function to print number from N to 1 (5 -> 5,4,3,2,1)
int number_from_N_to_1(int num)
{
        if(num == 0)
                return 0;

        printf("%d ",num);
        number_from_N_to_1(num - 1);
        return 0;
}
