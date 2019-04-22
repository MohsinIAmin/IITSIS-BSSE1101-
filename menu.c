#include"function.h"
void menu()
{
    printf("\t\t\t\t\tWELCOME\n");
    printf("\t\t\t\t\t=======\n");
    while(1) {
        printf("\t\t\t#INPUT PROFILE(press 1)\n");
        printf("\t\t\t#INPUT MARKS(press 2)\n");
        printf("\t\t\t#SEARCH(press 3)\n");
        printf("\t\t\t#SHOW RAW DATA(press 4)\n");
        printf("\t\t\t#ENTER YOUR CHOICE:");
        char a;
        fflush(stdin);
        a=getchar();
        if(a=='1')
            input_profile();
        else if(a=='2')
            input();
        else if(a=='3')
            search_menu();
        else if(a=='4')
            show();
		printf("\n\t\t#ARE YOU WANT TO QUITE?(Y/N)");
		printf("\n\t\t#");
		fflush(stdin);
		a=getchar();
		if(a=='Y'||a=='y')
			return;
    }
}
