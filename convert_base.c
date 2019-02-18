#include<stdio.h>

void convert_base(int , int);

int main (void)
{
        int num, base;

        printf("Enter the number : ");
        scanf("%d",&num);
        printf("Enter the base :");
        scanf("%d",&base);

        convert_base(num,base);
        printf("\n");
        return 0;
}

//Convert number to the given base
void convert_base(int num, int base)
{
        int rem;

        if(num == 0)
                return ;

        convert_base(num/base,base);
        rem = num % base;
        if(rem < 10)
                printf("%d",rem);

        else
                printf("%c",rem -10 + 'A');
        return;
}
