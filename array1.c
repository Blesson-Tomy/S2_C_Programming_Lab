// A simple program to calculate the sum and average of the elements stored in a 1D Array
#include<stdio.h>
int main()
{ 
    float arr[10],n,sum,avg;
    int i;

    printf("No of integers:");
    scanf("%f",&n);

    for(i=0;i<n;i++)
    {   scanf("%f",&arr[i]);
        sum=sum+arr[i];
    }

    avg=sum/n;

        printf("n=%f\n",n);


    printf("Sum=%f\n",sum);
    printf("Avg=%f",avg);

}