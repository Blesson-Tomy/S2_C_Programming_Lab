#include <stdio.h>

int main()
{ int a,b,c;
    printf("Enter the 3 numbers:");
        scanf("%d %d %d", &a,&b,&c);

        if ((a>b) && (a>c))
        {
            printf("A is the largest value");
            
        }

        if ((b>a) && (b>c))
        {
            printf("B is the largest value");
            
        }

        else if((c>a) && (c>b))
        {
            printf("C is the largest value");
            
        }
        
}