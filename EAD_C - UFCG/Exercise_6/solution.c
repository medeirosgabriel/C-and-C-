#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salary;
    printf("Type your salary: ");
    scanf("%f", &salary);
    if (salary <= 2000.00) {
        salary = salary * 1.13;
    }else if (salary > 2000.00 && salary <= 4000.00) {
        salary = salary * 1.09;
    }else{
        salary = salary * 1.07;
    }
    printf("New Salary: %.2f\n", salary);
}
