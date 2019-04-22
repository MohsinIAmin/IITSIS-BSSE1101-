#include"data.h"
#include<stdio.h>
void input_profile()
{
    struct bsse student;
    int n;
    FILE *fp;
    fp=fopen("student_information.txt","a+");
    while(1) {
        fflush(stdin);
        printf("\t\t#How Many Students:(0 to quite)");
        scanf("%d",&n);
        while(n--) {
            printf("\t\t#Name:");
            fflush(stdin);
            fgets(student.name,80,stdin);
            fprintf(fp,"%s",student.name);
            printf("\t\t#Address:");
            fgets(student.address,80,stdin);
            fprintf(fp,"%s",student.address);
            printf("\t\t#Roll:");
            fgets(student.roll_number,10,stdin);
            fprintf(fp,"%s",student.roll_number);
            printf("\t\t#Registation No:");
            scanf("%s",student.registation_number);
            fprintf(fp,"%s\n",student.registation_number);
        }
        printf("\t\t#ENTER A DIGIT TO CONTINUE\t#PRESS 0 TO QUITE\n\t\t#");
        scanf("%d",&n);
        if(!n)break;
    }
    fclose(fp);
    return;
}
