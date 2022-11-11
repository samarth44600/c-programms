#include<stdio.h>
struct employee{
    int empid;
    char name[20];
    float salary;
}emp;
int main(){
    FILE *fp;
    fp = fopen("employee.txt","w");
    printf("\nEnter employee id: ");
    scanf("%d",&emp.empid);
    printf("\nEnter name: ");
    scanf("%s",emp.name);
    printf("\nEnter salary: ");
    scanf("%f",&emp.salary);
    fwrite(&emp,sizeof(emp),1,fp);
    fclose(fp);
    fp = fopen("employee.txt","r");
    printf("\nData from the file\n");
    fread(&emp,(sizeof(emp)),1,fp);
    printf("\n%d\t%s\t%f",emp.empid,emp.name,emp.salary);
    fclose(fp);
    return 0;
}