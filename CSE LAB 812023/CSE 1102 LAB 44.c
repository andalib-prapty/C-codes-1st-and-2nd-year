#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 5
#define MAX_DEPT_NAME 20

struct Employee {
    int id;
    char name[50];
    double salary;
    char department[MAX_DEPT_NAME];
};

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    char departments[MAX_EMPLOYEES][MAX_DEPT_NAME];
    int num_departments = 0;
    double dept_total_salary[MAX_EMPLOYEES] = {0};
    int dept_num_employees[MAX_EMPLOYEES] = {0};



    for (int i = 0; i < MAX_EMPLOYEES; i++) {

        scanf("%d %s %lf %s", &employees[i].id, employees[i].name, &employees[i].salary, employees[i].department);

        int dept_index = -1;
        for (int j = 0; j < num_departments; j++) {
            if (strcmp(departments[j], employees[i].department) == 0) {
                dept_index = j;
                break;
            }
        }


        if (dept_index == -1) {
            strcpy(departments[num_departments], employees[i].department);
            dept_index = num_departments;
            num_departments++;
        }


        dept_total_salary[dept_index] += employees[i].salary;

        dept_num_employees[dept_index]++;
    }


    printf("\nDepartment-wise total salary and average salary:\n");
    for (int i = 0; i < num_departments; i++) {
        double avg_salary = dept_total_salary[i] / dept_num_employees[i];
        printf("Department: %s\n", departments[i]);
        printf("Total salary: %.2lf\n", dept_total_salary[i]);
        printf("Average salary: %.2lf\n\n", avg_salary);
    }

    return 0;
}
