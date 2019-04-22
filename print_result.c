#include"function.h"
void print_result(char *rol,char t,char f,int num,float g)
{
    int s[6];
    char roll1[11];
    char gl[6][3];
    char gpa[5];
    char sub[6][6];
    float gp[6];
    int i=0;
    FILE *fp;
    fp=fopen("result_sheet.txt","r");
    while(!feof(fp)) {
        fgets(roll1,10,fp);
        fscanf(fp,"%s",sub[i]);
        fscanf(fp,"%d",&s[i]);
        fscanf(fp,"%s",gl[i]);
        fscanf(fp,"%f",&gp[i]);
        i++;
        fgetc(fp);
        fscanf(fp,"%s",sub[i]);
        fscanf(fp,"%d",&s[i]);
        fscanf(fp,"%s",gl[i]);
        fscanf(fp,"%f",&gp[i]);
        i++;
        fgetc(fp);
        fscanf(fp,"%s",sub[i]);
        fscanf(fp,"%d",&s[i]);
        fscanf(fp,"%s",gl[i]);
        fscanf(fp,"%f",&gp[i]);
        i++;
        fgetc(fp);
        fscanf(fp,"%s",sub[i]);
        fscanf(fp,"%d",&s[i]);
        fscanf(fp,"%s",gl[i]);
        fscanf(fp,"%f",&gp[i]);
        i++;
        fgetc(fp);
        fscanf(fp,"%s",sub[i]);
        fscanf(fp,"%d",&s[i]);
        fscanf(fp,"%s",gl[i]);
        fscanf(fp,"%f",&gp[i]);
        i++;
        fgetc(fp);
        fscanf(fp,"%s",sub[i]);
        fscanf(fp,"%d",&s[i]);
        fscanf(fp,"%s",gl[i]);
        fscanf(fp,"%f",&gp[i]);
        i++;
        fgetc(fp);
        fgets(gpa,5,fp);
        fgetc(fp);
        i=roll_search(roll1,rol,'2');
        roll1[8]='\0';
        if(i) {
            for(i=0; i<6; i++) {
                if(sub[i][2]==t&&sub[i][4]==f&&g==100) {
                    printf("%s\t%s\t%d\t%s\t%.2f\n",roll1,sub[i],s[i],gl[i],gp[i]);
                } else if(sub[i][2]==t&&sub[i][4]==f&&s[i]>=num&&g==101) {
                    printf("%s\t%s\t%d\t%s\t%.2f\n",roll1,sub[i],s[i],gl[i],gp[i]);
                }  else if(sub[i][2]==t&&sub[i][4]==f&&s[i]<=num&&g==102) {
                    printf("%s\t%s\t%d\t%s\t%.2f\n",roll1,sub[i],s[i],gl[i],gp[i]);
                } else if(sub[i][2]==t&&sub[i][4]==f&&gp[i]>=g&&num==103) {
                    printf("%s\t%s\t%d\t%s\t%.2f\n",roll1,sub[i],s[i],gl[i],gp[i]);
                }  else if(sub[i][2]==t&&sub[i][4]==f&&gp[i]<=g&&num==104) {
                    printf("%s\t%s\t%d\t%s\t%.2f\n",roll1,sub[i],s[i],gl[i],gp[i]);
                } else if(s[i]>=num&&g==105) {
                    printf("%s\t%s\t%d\t%s\t%.2f\n",roll1,sub[i],s[i],gl[i],gp[i]);
                } else if(s[i]<=num&&g==106) {
                    printf("%s\t%s\t%d\t%s\t%.2f\n",roll1,sub[i],s[i],gl[i],gp[i]);
                } else if(gp[i]>=g&&num==107) {
                    printf("%s\t%s\t%d\t%s\t%.2f\n",roll1,sub[i],s[i],gl[i],gp[i]);
                } else if(gp[i]<=g&&num==108) {
                    printf("%s\t%s\t%d\t%s\t%.2f\n",roll1,sub[i],s[i],gl[i],gp[i]);
                }
            }
            i=0;
        }
    }
}

