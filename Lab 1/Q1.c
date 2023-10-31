#include <stdio.h>

int main(){
    int EmployeeID;
    float hoursworked,hourlyrate,salary;
    printf("Enter Empoyee's ID");
    scanf("%d",&EmployeeID);
    printf("Enter Total Worked Hours :");
    scanf("%f",&hoursworked);
    printf("Amount Recieved per Hours");
    scanf("%f",&hourlyrate);
    salary= hourlyrate*hoursworked;
    printf("EmployeeID: %d\n",EmployeeID);
    printf("Salary is :%.2f\n",salary);
    return 0;
}

