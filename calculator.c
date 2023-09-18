#include<stdio.h>
int result,a,b;
int mul(int a,int b);
int sub(int a, int b);
int div(int a, int b);
int add(int a,int b);
int main()
{
    int sum,addition,multiplication,division,num;
    printf("Which function would you like to perform?");
    scanf("%d",&num);

    switch(num)
    {   
        case 2:
            mul(a,b);
            printf("%d",result);
            break;

        case 3:
            sub(a,b);
            printf("%d",result);
            break;

        case 4:
            div(a,b);
            printf("%d",result);
            break;

         case 1:
            add(a,b);
            printf("%d",result);
            break;


        default:
            printf("Invalid Input");

    }
}

int add(int a,int b)
    {    printf("Enter the 2 numbers:");
        scanf("%d %d", &a,&b);
        
        result=a+b;
        
    }

int sub(int a,int b)
{
    printf("Enter the 2 numbers:");
        scanf("%d %d", &a,&b);
        
        result=a-b;
        
}

int mul(int a,int b)
{
    printf("Enter the 2 numbers:");
        scanf("%d %d", &a,&b);
        
        result=a*b;
        
}

int div(int a,int b)
{
    printf("Enter the 2 numbers:");
        scanf("%d %d", &a,&b);
        
        result=a-b;
        
}