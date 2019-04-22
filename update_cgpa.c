#include<stdio.h>
#include"function.h"
void update_cgpa(char *roll,double cgpa,int j)
{
    FILE *cg;
    cg=fopen("CGPA.txt","a+");
	fprintf(cg,"%s\t%.2f\t%d\n",roll,cgpa,j);
	fclose(cg);
	printf("ROLL:%s\tSEMESTER:%d\tCGPA:%.2f\n",roll,j,cgpa);
	return;
}
