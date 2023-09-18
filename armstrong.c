//This is a sample program to check whether a number is an Armstrong Number. 
//In this program, an armstrong number is a 3 digit number that is equal to the sum of the cubes of the digits.

#include<stdio.h>
int main()
{
    int a,b=0,num,temp;

    printf("Enter the number to be checked:");
    scanf("%d",&num);

    temp=num;

    while(num!=0)
    {
        a=num%10;
        b=b+(a*a*a);
        num=num/10;

    }

    if (b==temp)
    {
        printf("It is an armstrong number.");
    }
    else
    {
        printf("It is not an armstrong number.");
    }
}