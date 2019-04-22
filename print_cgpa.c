#include<stdio.h>
#include"function.h"
void print_cgpa(char *roll,char k,float cg)
{
    FILE *fp;
    char roll2[9];
    int j;
    double i;
    int a;
    fp=fopen("CGPA.txt","r");
    while(!feof(fp)) {
        fscanf(fp,"%s",roll2);
        fscanf(fp,"%lf",&i);
        i=((int)(i * 100 + .5) / 100.0);
        fscanf(fp,"%d",&j);
        a=roll_search(roll2,roll,0);
        if(a&&(j+48)==k) {
            printf("ROLL:%s\tSEMESTER:%c\tCGPA:%.2f\n",roll2,k,i);
        } else if(k=='9') {
            if(a&&i>=cg) {
                printf("ROLL:%s\tSEMESTER:%d\tCGPA:%.2f\n",roll2,j,i);
            }
        } else if(k=='A') {
            if(a&&i<=cg) {
                printf("ROLL:%s\tSEMESTER:%d\tCGPA:%.2f\n",roll2,j,i);
            }
        }else if(k=='B') {
            if(a&&(i==cg)) {
                printf("ROLL:%s\tSEMESTER:%d\tCGPA:%.2f\n",roll2,j,i);
            }
        }
        roll2[0]='\0';
        i=0;
        j=0;
    }
    fclose(fp);
}
