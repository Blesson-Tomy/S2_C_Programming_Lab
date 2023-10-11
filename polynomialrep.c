#include <stdio.h>
int main()
{
    int i, j,n;
    printf("Enter the number of coefficients:");
    scanf("%d",&n);

    struct poly
    {
        int coeff;
        int exp;

    }p[n];

    for(i=0; i<n;i++)
    {
        printf("Enter the coefficient of the %dth exponent:",i);
        scanf("%d", &p[i].coeff);
        p[i].exp=i;
    }
    printf("The polynomial is:");

    for(i=n-1;i>=0;i--)
    {
        if (p[i].coeff!=0)
        {
            printf("%dX^%d + ", p[i].coeff,p[i].exp);
        }
    }
   
    
}
