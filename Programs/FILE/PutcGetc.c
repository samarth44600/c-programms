#include<stdio.h>
#include<windows.h>

int main(){
    FILE *f;
    char ch;
    system("cls");
    printf("\nInput Data= ");
    f = fopen("data.txt","w");
    while((ch=getchar())!=EOF)
        putc(ch,f);
    fclose(f);
    printf("\nOutput Data\n");
    f = fopen("data.txt","r");
    while((ch = getc(f))!= EOF)
        putchar(ch);
    fclose(f);
    return 0;
}