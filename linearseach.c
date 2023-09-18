#include<stdio.h>

int main()
{
    int i,j,a[5]={8,5,3,5,5},search,flag=0;

    search=10;

    for(i=0;i<5;i++)
    {
        if(a[i]==search)
        {
            flag++;
        }

    }

    printf("The number %d is present in the array %d times.",search,flag);


}