#include<stdio.h>
int main()
{ int big, a,b,c;
printf("Enter");
scanf("%d %d %d", &a,&b,&c);
    big=((a>b)?(a>c?a:b):(b>c?b:c));
    printf("%d", big);
}