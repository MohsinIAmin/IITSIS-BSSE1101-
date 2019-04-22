#include"data.h"
#include<stdio.h>
#include"function.h"
void calculate_gpa(int marks,int i)
{
    FILE *mark;
    mark=fopen("result_sheet.txt","a+");
    if(marks>=80) {
        fprintf(mark,"%s\t%d\tA+\t4.00\n",sub[semi-1][i],marks);
        gp[i]=4.00;
    } else if(marks>=75) {
        fprintf(mark,"%s\t%d\tA\t3.75\n",sub[semi-1][i],marks);
        gp[i]=3.75;
    } else if(marks>=70) {
        fprintf(mark,"%s\t%d\tA-\t3.50\n",sub[semi-1][i],marks);
        gp[i]=3.50;
    } else if(marks>=65) {
        fprintf(mark,"%s\t%d\tB+\t3.25\n",sub[semi-1][i],marks);
        gp[i]=3.25;
    } else if(marks>=60) {
        fprintf(mark,"%s\t%d\tB\t3.00\n",sub[semi-1][i],marks);
        gp[i]=3.00;
    } else if(marks>=55) {
        fprintf(mark,"%s\t%d\tB-\t2.75\n",sub[semi-1][i],marks);
        gp[i]=2.75;
    } else if(marks>=50) {
        fprintf(mark,"%s\t%d\tC+\t2.50\n",sub[semi-1][i],marks);
        gp[i]=2.50;
    } else if(marks>=45) {
        fprintf(mark,"%s\t%d\tC\t2.25\n",sub[semi-1][i],marks);
        gp[i]=2.25;
    } else if(marks>=40) {
        fprintf(mark,"%s\t%d\tD\t2.00\n",sub[semi-1][i],marks);
        gp[i]=2.00;
    } else {
        fprintf(mark,"%s\t%d\tF\t0.00\n",sub[semi-1][i],marks);
        gp[i]=0.00;
    }
    fclose(mark);
    return;
}
