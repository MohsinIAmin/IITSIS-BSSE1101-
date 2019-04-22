#include<stdio.h>
#include"function.h"
#include"data.h"
void sarch(char a)
{
    FILE *fp;
    struct bsse stud;
    char rol[21];
    char ch;
    int i;
    if(a>='1'&&a<='6') {
        fp=fopen("student_information.txt","r");
        if(a=='1'||a=='4')
            printf("\t\t#Name:");
        else if(a=='2'||a=='5')
            printf("\t\t#Roll:");
        else if(a=='3'||a=='6')
            printf("\t\t#Reg:");
        fflush(stdin);
        scanf("%[^\n]",rol);
        while(!feof(fp)) {
            fgets(stud.name,80,fp);
            fgets(stud.address,80,fp);
            fgets(stud.roll_number,10,fp);
            fgets(stud.registation_number,8,fp);
            if(a=='1'||a=='4')
                i=roll_search(stud.name,rol,a);
            else if(a=='2'||a=='5')
                i=roll_search(stud.roll_number,rol,a);
            else if(a=='3'||a=='6')
                i=roll_search(stud.registation_number,rol,a);
            if(i==1) {
                printf("\t\t#NAME:%s\n",stud.name);
                printf("\t\t#ADDRESS:%s\n",stud.address);
                printf("\t\t#ROLL:%s\n",stud.roll_number);
                printf("\t\t#REGISTRATION NO:%s\n",stud.registation_number);
                if(a=='1'||a=='2'||a=='3') {
                    res(stud.roll_number,1);
                }
                stud.name[0]='\0';
                stud.address[0]='\0';
                stud.roll_number[0]='\0';
                stud.registation_number[0]='\0';
                i=0;
            }
        }
    } else if(a=='9') {
        printf("\t\t#ROLL:");
        fflush(stdin);
        fgets(rol,10,stdin);
        rol[8]='\0';
        res(rol,1);
    } else if(a=='A') {
        printf("\t\t#ROLL:");
        fflush(stdin);
        fgets(rol,7,stdin);
        rol[6]='\0';
        res(rol,1);
    } else if(a=='B') {
        printf("\t\t#ROLL:");
        fflush(stdin);
        fgets(rol,9,stdin);
        rol[8]='\0';
        char j=0;
        printf("\t\t#SEMESTER:");
        fflush(stdin);
        scanf("%c",&j);
        print_cgpa(rol,j,10);
    } else if(a=='C') {
        printf("\t\t#ROLL:");
        fflush(stdin);
        fgets(rol,8,stdin);
        rol[6]='\0';
        char j=0;
        printf("\t\t#SEMESTER:");
        fflush(stdin);
        scanf("%c",&j);
        print_cgpa(rol,j,10);
    } else if(a=='D') {
        printf("\t\t#ROLL:");
        fflush(stdin);
        fgets(rol,10,stdin);
        rol[8]='\0';
        char j=0;
        for(j='1'; j<'9'; j++)
            print_cgpa(rol,j,10);
    } else if(a=='E') {
        printf("\t\t#ROLL:");
        fflush(stdin);
        fgets(rol,8,stdin);
        rol[6]='\0';
        char j=0;
        for(j='1'; j<'9'; j++)
            print_cgpa(rol,j,10);
    } else if(a=='F') {
        printf("\t\t#ROLL:");
        fflush(stdin);
        fgets(rol,10,stdin);
        rol[6]='\0';
        float cg=0;
		printf("\t\t#CGPA:");
        scanf("%f",&cg);
        print_cgpa(rol,'9',cg);
    }else if(a=='G') {
        printf("\t\t#ROLL:");
        fflush(stdin);
        fgets(rol,10,stdin);
        rol[6]='\0';
		printf("\t\t#CGPA:");
        float cg=0;
        scanf("%f",&cg);
        print_cgpa(rol,'A',cg);
    }else if(a=='H') {
        printf("\t\t#ROLL:");
        fflush(stdin);
        fgets(rol,10,stdin);
        rol[6]='\0';
		printf("\t\t#CGPA:");
        float cg=0;
        scanf("%f",&cg);
        print_cgpa(rol,'B',cg);
    }else if(a=='I') {
        printf("\t\t#ROLL:");
        fflush(stdin);
        fgets(rol,10,stdin);
        rol[8]='\0';
        float cg=0;
        printf("\t\t#CGPA:");
        scanf("%f",&cg);
        print_cgpa(rol,'9',cg);
    }else if(a=='J') {
        printf("\t\t#ROLL:");
        fflush(stdin);
        fgets(rol,10,stdin);
        rol[8]='\0';
        float cg=0;
        printf("\t\t#CGPA:");
        scanf("%f",&cg);
        print_cgpa(rol,'A',cg);
    }else if(a=='K') {
        printf("\t\t#ROLL:");
        fflush(stdin);
        fgets(rol,9,stdin);
        rol[8]='\0';
        char j=0;
        printf("\t\t#SEMESTER:");
        fflush(stdin);
        scanf("%c",&j);
        print_gpa(rol,j,10);
    } else if(a=='L') {
        printf("\t\t#ROLL:");
        fflush(stdin);
        fgets(rol,8,stdin);
        rol[6]='\0';
        char j=0;
        printf("\t\t#SEMESTER:");
        fflush(stdin);
        scanf("%c",&j);
        print_gpa(rol,j,10);
    } else if(a=='M') {
        printf("\t\t#ROLL:");
        fflush(stdin);
        fgets(rol,10,stdin);
        rol[8]='\0';
        char j=0;
        for(j='1'; j<'9'; j++)
            print_gpa(rol,j,10);
    } else if(a=='N') {
        printf("\t\t#ROLL:");
        fflush(stdin);
        fgets(rol,8,stdin);
        rol[6]='\0';
        char j=0;
        for(j='1'; j<'9'; j++)
            print_gpa(rol,j,10);
    } else if(a=='O') {
        printf("\t\t#ROLL:");
        fflush(stdin);
        fgets(rol,10,stdin);
        rol[6]='\0';
        float cg=0;
		printf("\t\t#GPA:");
        scanf("%f",&cg);
        print_gpa(rol,'9',cg);
    }else if(a=='P') {
        printf("\t\t#ROLL:");
        fflush(stdin);
        fgets(rol,10,stdin);
        rol[6]='\0';
		printf("\t\t#GPA:");
        float cg=0;
        scanf("%f",&cg);
        print_gpa(rol,'A',cg);
    }else if(a=='Q') {
        printf("\t\t#ROLL:");
        fflush(stdin);
        fgets(rol,10,stdin);
        rol[6]='\0';
		printf("\t\t#GPA:");
        float cg=0;
        scanf("%f",&cg);
        print_gpa(rol,'B',cg);
    }else if(a=='R') {
        printf("\t\t#ROLL:");
        fflush(stdin);
        fgets(rol,10,stdin);
        rol[8]='\0';
        float cg=0;
        printf("\t\t#GPA:");
        scanf("%f",&cg);
        print_gpa(rol,'9',cg);
    }else if(a=='S') {
        printf("\t\t#ROLL:");
        fflush(stdin);
        fgets(rol,10,stdin);
        rol[8]='\0';
        float cg=0;
        printf("\t\t#GPA:");
        scanf("%f",&cg);
        print_gpa(rol,'A',cg);
    }
    printf("\t\t#DO YOU WANT TO SEARCH AGAIN(Y/N)\n\t\t#");
    fflush(stdin);
    ch=getchar();
    if(ch=='Y'||ch=='y') {
        search_menu();
    } else
        return;
}

