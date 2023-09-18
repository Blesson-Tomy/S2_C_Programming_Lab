#include <stdio.h>
int main()
{
    int i,j,temp,a[10]={7,9,3,13,5,29,2,1,8,30};

    for(i=0;i<10;i++)
    {
        j=1;

        for(j=i+1;j<10;j++)
        {
            if (a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }

    printf("The second largest number is %d.",a[8]);
}