#include"data.h"
#include"function.h"
void input()
{
    while(1) {
        printf("\t\t#SEMESTER:(9 to quite)\n\t\t#");
        scanf("%d",&semi);
        if(semi>=9)
            return;
        else if(semi==1) {
            subject_nam1();
            input_marks();
        } else if(semi==2) {
            subject_nam2();
            input_marks();
        } else if(semi==3) {
            subject_nam3();
            input_marks();
        } else if(semi==4) {
            subject_nam4();
            input_marks();
        } else if(semi==5) {
            subject_nam5();
            input_marks();
        } else if(semi==6) {
            subject_nam6();
            input_marks();
        } else if(semi==7) {
            subject_nam7();
            input_marks();
        } else if(semi==8) {
            subject_nam8();
            input_marks();
        }
    }
}