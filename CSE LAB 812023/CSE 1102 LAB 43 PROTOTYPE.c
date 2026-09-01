#include <stdio.h>
#include <string.h>



 struct Employee {
    int id;
    char name[50];
    double salary;
    char dept[10];
} ;

int main() {
   struct Employee emp[5];
    char dept[10];
    int num_departments = 0;
    double dept_total_salary[5] = {0};
    int dept_num_employees[5] = {0};



    for (int i = 0; i <5; i++) {

        scanf("%d %s %lf %s", &emp[i].id, emp[i].name, emp[i]. salary, emp[i].dept);


        int dept_index = -1;
        for (int j = 0; j < num_departments; j++) {
            if (strcmp(dept[j], emp[i].dept) == 0) {
                dept_index = j;
                break;
            }
        }


        if (dept_index == -1) {
            strcpy(dept[i], emp[i].department);
            dept_index = num_departments;
            num_departments++;
        }


        dept_total_salary[dept_index] += emp[i].salary;

        dept_num_employees[dept_index]++;
    }

    // Display department-wise total salary and average salary
    printf("\nDepartment-wise total salary and average salary:\n");
    for (int i = 0; i < num_departments; i++) {
        double avg_salary = dept_total_salary[i] / dept_num_employees[i];
        printf("Department: %s\n", departments[i]);
        printf("Total salary: %.2lf\n", dept_total_salary[i]);
        printf("Average salary: %.2lf\n\n", avg_salary);
    }

    return 0;
}
