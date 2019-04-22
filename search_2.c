#include"function.h"
void res(char *rol,int wh)
{
    double gpa[8]= {0,0,0,0,0,0,0,0},a,cgpa=0;
    int j=0;
    char roll_num[10];
    struct result {
        char roll[11];
        char sub1[20];
        char sub2[20];
        char sub3[20];
        char sub4[20];
        char sub5[20];
        char sub6[20];
        char res[10];
    };
    struct result stud;
    int i=1;
    FILE *fp;
    strcpy(roll_num,rol);
    fp=fopen("result_sheet.txt","r");
    while(!feof(fp)) {
        fgets(stud.roll,10,fp);
        fgets(stud.sub1,20,fp);
        fgets(stud.sub2,20,fp);
        fgets(stud.sub3,20,fp);
        fgets(stud.sub4,20,fp);
        fgets(stud.sub5,20,fp);
        fgets(stud.sub6,20,fp);
        fgets(stud.res,5,fp);
        fgetc(fp);
        i=roll_search(stud.roll,rol,'2');
        if(i) {
            printf("%s",stud.roll);
            if(stud.sub1[2]!='7') {
                printf("%s",stud.sub1);
                printf("%s",stud.sub2);
                printf("%s",stud.sub3);
                printf("%s",stud.sub4);
				printf("%s",stud.sub5);
                printf("%s",stud.sub6);

            } else {
                printf("%s",stud.sub1);
            }
            printf("G.P.A\t%s\n",stud.res);
            a=atof(stud.res);
            gpa[j]=a;
            j++;
            stud.roll[8]='\0';
            char ch=stud.sub1[2];
            FILE *cg=fopen("CGPA.txt","a+");fclose(cg);
            print_cgpa(stud.roll,ch,0);
        }
        stud.sub1[0]='\0';
        stud.sub2[0]='\0';
        stud.sub3[0]='\0';
        stud.sub4[0]='\0';
        stud.sub5[0]='\0';
        stud.sub6[0]='\0';
        stud.roll[0]='\0';
        stud.res[0]='\0';
    }
    for(int k=0; k<8; k++) {
        cgpa=cgpa+gpa[k];
        gpa[k]=0;
    }
    cgpa=cgpa/(j);
    if(!wh) {
        roll_num[8]='\0';
        update_cgpa(roll_num,cgpa,j);
    }
    fclose(fp);
    return;
}
