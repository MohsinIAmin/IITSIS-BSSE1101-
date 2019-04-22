#include"data.h"
#include"function.h"
#include<stdio.h>
void input_marks()
{
    FILE *mark;
    FILE *GPA;
    char roll[9];
    float gpa=0.0;
    if(semi==7) {
        printf("\t\t#Enter Roll:\n\t\t#");
        scanf("%s",roll);
        mark=fopen("result_sheet.txt","a+");
        fprintf(mark,"%s\n",roll);
        fclose(mark);
        printf("\t\t#ENTER NUMBER OF SE701:");
        scanf("%d",&res_input[0]);
        calculate_gpa(res_input[0],0);
        gpa=gp[0];
        mark=fopen("result_sheet.txt","a+");
        for(int j=1; j<6; j++)
            fprintf(mark,"SE70%d\t80\tA+\t4.00\n",j+1);
        fclose(mark);
    } else {
        printf("\t\t#Enter Roll:\n\t\t#");
        scanf("%s",roll);
        mark=fopen("result_sheet.txt","a+");
        fprintf(mark,"%s\n",roll);
        fclose(mark);
        for(int i=0; i<6; i++) {
            printf("\t\t#ENTER NUMBER OF %s:",sub[semi-1][i]);
            scanf("%d",&res_input[i]);
            calculate_gpa(res_input[i],i);
        }
        for(int i=0; i<6; i++) {
            gpa=gpa+gp[i];
        }
        gpa=gpa/6.0;
    }
    mark=fopen("result_sheet.txt","a+");
    fprintf(mark,"%.2f\n",gpa);
    fclose(mark);
    GPA=fopen("GPA.txt","a+");
    fprintf(GPA,"%s\t%.2f\t%d\n",roll,gpa,semi);
    fclose(GPA);
    res(roll,0);
    return;
}
