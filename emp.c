#include<stdio.h>
struct employee
{
    int age,phonenumber,salary;
    char name[25];
}emp[100];
 
void main()
{
    int i,n;
    printf("Enter the no of employees\n");
    scanf("%d",&n);
    printf("Enter employee info as name , age ,phonenumber, salary\n");
    for(i=0;i<n;i++)
    {
        scanf("%s %d %d %d",&emp[i].name,&emp[i].age,&emp[i].phonenumber,&emp[i].salary);
    }
    printf("\nName\t\tAge\tPhoneNumber\t\tSalary\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t\t%d\t\t%d\t\t%d\n",emp[i].name,emp[i].age,emp[i].phonenumber,emp[i].salary);
    }
}
