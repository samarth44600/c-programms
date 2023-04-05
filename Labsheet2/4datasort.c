// create file: data.txt which contains record of 20 empoyee in the form of "name, salary, address, department" and sort the data in descending order of salary and print the data in the form of 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee
{
    char name[20];
    int salary;
    char address[20];
    char department[20];
};


int main()
{
    FILE *fp;
    struct employee emp[20];
    int i, j;
    char temp[20];
    int temp1;
    char temp2[20];
    char temp3[20];

    fp = fopen("data.txt", "r");
    if (fp == NULL)
    {
        printf("File not found\n");
        exit(1);
    }

    for (i = 0; i < 20; i++)
    {
        fscanf(fp, "%s %d %s %s", emp[i].name, &emp[i].salary, emp[i].address, emp[i].department);
    }

    for (i = 0; i < 20; i++)
    {
        for (j = i + 1; j < 20; j++)
        {
            if (emp[i].salary < emp[j].salary)
            {
                strcpy(temp, emp[i].name);
                strcpy(emp[i].name, emp[j].name);
                strcpy(emp[j].name, temp);

                temp1 = emp[i].salary;
                emp[i].salary = emp[j].salary;
                emp[j].salary = temp1;

                strcpy(temp2, emp[i].address);
                strcpy(emp[i].address, emp[j].address);
                strcpy(emp[j].address, temp2);

                strcpy(temp3, emp[i].department);
                strcpy(emp[i].department, emp[j].department);
                strcpy(emp[j].department, temp3);
            }
        }
    }

    for (i = 0; i < 20; i++)
    {
        printf("%s %d %s %s\n", emp[i].name, emp[i].salary, emp[i].address, emp[i].department);
    }

    fclose(fp);
    return 0;
}

