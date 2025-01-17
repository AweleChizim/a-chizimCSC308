#include <stdio.h>

int main() {
    int age, isExperienced, salary;

    printf("Please enter your age: ");
    scanf("%i", &age);
    printf("Please enter '1' if experienced or '0' if not: ");
    scanf("%i", &isExperienced);

    if (isExperienced && (age >= 40)) {
        salary = 560000;
        printf("Salary is N%i\n", salary);
    } else if (isExperienced && ((age >= 30) && (age < 40))) {
        salary = 480000;
        printf("Salary is N%i\n", salary);
    } else if (isExperienced && (age < 28)) {
        salary = 300000;
        printf("Salary is N%i\n", salary);
    } else if (!isExperienced) {
        salary = 100000;
        printf("Salary is N%i\n", salary);
    }
    return 0;
}