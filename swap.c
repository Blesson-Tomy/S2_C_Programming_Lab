#include<stdio.h>
int swap(int *,int *);
int temp;
int *a,*b;
int main()
{

scanf("%d %d",&a,&b);
swap(&a,&b);
printf("The swap is: a=%d b=%d",a,b);

}

int swap(int *a,int *b)
{
    temp=*a;
    *a=*b;
    *b=temp;

    return 0;
}