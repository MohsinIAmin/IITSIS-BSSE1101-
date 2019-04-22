#include<stdlib.h>
#include<stdio.h>
void show()
{
    printf("\t\t#1:Result Sheet\n\t\t#2:Information\n\t\t#3:CGPA Sheet\n");
    printf("\t\t#Enter Your Choice\n\t\t#");
    fflush(stdin);
    char a=getchar();
    if(a=='1') {
        system("start result_sheet.txt");
    } else if(a=='2') {
        system("start student_information.txt");
    }else if(a=='3'){
	system("start CGPA.txt");
    }
}
