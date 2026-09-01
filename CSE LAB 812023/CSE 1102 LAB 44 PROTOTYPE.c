#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 5
#define MAX_DEPARTMENT_NAME 20

struct employee {
    int id;
    char name[50];
    float salary;
    char department[MAX_DEPARTMENT_NAME];
};

void calculate_department_salaries(struct employee employees[]) {
    float total_salary[MAX_DEPARTMENT_NAME] = {0};
    int employee_count[MAX_DEPARTMENT_NAME] = {0};
    float average_salary[MAX_DEPARTMENT_NAME] = {0};


    for (int i = 0; i < MAX_EMPLOYEES; i++) {
        total_salary[employees[i].department] += employees[i].salary;
        employee_count[employees[i].department]++;
    }


    for (int i = 0; i < MAX_DEPARTMENT_NAME; i++) {
        if (employee_count[i] > 0) {
            average_salary[i] = total_salary[i] / employee_count[i];
        }
    }


    printf("Department-wise total salary and average salary:\n");
    for (int i = 0; i < MAX_EMPLOYEES; i++) {
        if (total_salary[employees[i].department] > 0) {
            printf("%s:\n", employees[i].department);
            printf("Total salary: %.2f\n", total_salary[employees[i].department]);
            printf("Average salary: %.2f\n", average_salary[employees[i].department]);
            printf("\n");
            total_salary[employees[i].department] = 0;
        }
    }
}

int main() {
    struct employee employees[MAX_EMPLOYEES];


    for (int i = 0; i < MAX_EMPLOYEES; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("Department: ");
        scanf("%s", employees[i].department);
        printf("\n");
    }


    for (int i = 0; i < MAX_EMPLOYEES - 1; i++) {
        for (int j = 0; j < MAX_EMPLOYEES - i - 1; j++) {
            if (employees[j].salary > employees[j + 1].salary) {
                struct employee temp = employees[j];
                employees[j] = employees[j + 1];
                employees[j + 1] = temp;
            }
        }
    }


    printf("Employee details sorted by salary:\n");
    for (int i = 0; i < MAX_EMPLOYEES; i++) {
        printf("ID: %d\n", employees[i].id);
        printf("Name: %s\n", employees[i].name);
        printf("Salary: %.2f\n", employees[i].salary);
        printf("Department: %s\n", employees[i].department);
        printf("\n");
    }

    calculate_department_salaries(employees);

    return 0;
}
