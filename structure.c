#include<stdio.h>

union Google{

    char Name[10];
    int ID;
    int Sal;
};

int main()
{ int n,i;
    union Google Emp[10];

    printf("Enter no:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter the Name:");
        scanf("%s",&Emp[i].Name);

        printf("Enter ID");
        scanf("%d",&Emp[i].ID);

        printf("Enter Salary");
        scanf("%d",&Emp[i].Sal);

    }

    for(i=0;i<n;i++)
    {
        
        printf("The details of %s are:",Emp[i].Name);

        printf("ID: %d",Emp[i].ID);
    

        printf("Salary: %d", Emp[i].Sal);
      
    }




}