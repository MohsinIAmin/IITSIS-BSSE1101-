#include"function.h"
void search_menu()
{
    char temp;
    printf("\t\t#SEARCH OPTIONS\n");
    printf("\t\t#NAME[FULL HISTORY](press 1)\n");
    printf("\t\t#ROLL[FULL HISTORY](press 2)\n");
    printf("\t\t#REGISTRATION NO[FULL HISTORY](press 3)\n");
    printf("\t\t#NAME[PROFILE](press 4)\n");
    printf("\t\t#ROLL[PROFILE](press 5)\n");
    printf("\t\t#REGISTRATION NO[PROFILE](press 6)\n");
    printf("\t\t#ROLL[BATCH FULL HISTORY](press 7)\n");
    printf("\t\t#ROLL[BATCH PROFILE](press 8)\n");
    printf("\t\t#ROLL[FULL RESULT](press 9)\n");
    printf("\t\t#ROLL[BATCH FULL RESULT](press A)\n");
    printf("\t\t#ROLL[CGPA AT A SEMESTER](press B)\n");
    printf("\t\t#ROLL[BATCH CGPA AT A SEMESTER](press C)\n");
    printf("\t\t#ROLL[CGPA OF ALL SEMESTER](press D)\n");
    printf("\t\t#ROLL[BATCH CGPA OF ALL SEMESTER](press E)\n");
    printf("\t\t#ROLL[BATCH CGPA OVER](press F)\n");
    printf("\t\t#ROLL[BATCH CGPA UNDER](press G)\n");
    printf("\t\t#ROLL[BATCH CGPA EXACT](press H)\n");
    printf("\t\t#ROLL[INDIVUDIAL CGPA OVER](press I)\n");
    printf("\t\t#ROLL[INDIVIDUAL CGPA UNDER](press J)\n");
    printf("\t\t#ROLL[GPA AT A SEMESTER](press K)\n");
    printf("\t\t#ROLL[BATCH GPA AT A SEMESTER](press L)\n");
    printf("\t\t#ROLL[GPA OF ALL SEMESTER](press M)\n");
    printf("\t\t#ROLL[BATCH GPA OF ALL SEMESTER](press N)\n");
    printf("\t\t#ROLL[BATCH GPA OVER](press O)\n");
    printf("\t\t#ROLL[BATCH GPA UNDER](press P)\n");
    printf("\t\t#ROLL[BATCH GPA EXACT](press Q)\n");
    printf("\t\t#ROLL[INDIVUDIAL GPA OVER](press R)\n");
    printf("\t\t#ROLL[INDIVIDUAL GPA UNDER](press S)\n\t\t#");
    fflush(stdin);
    temp=getchar();
    if(temp=='1'||temp=='2'||temp=='3') {
        sarch(temp);
    } else if(temp=='4'||temp=='5'||temp=='6') {
        sarch(temp);
    } else if(temp=='7') {
        temp='2';
        printf("\t\t#Just Write BSSE(batch_number)i.e. BSSE01,BSSE02 and so on#\n");
        sarch(temp);
    } else if(temp=='8') {
        temp='5';
        printf("\t\t#Just Write BSSE(batch_number)i.e. BSSE01,BSSE02 and so on#\n");
        sarch(temp);
    } else if(temp=='9') {
        sarch(temp);
    } else if(temp=='A') {
        printf("\t\t#Just Write BSSE(batch_number)i.e. BSSE01,BSSE02 and so on#\n");
        sarch(temp);
    } else if(temp=='B') {
        sarch(temp);
    } else if(temp=='C') {
        printf("\t\t#Just Write BSSE(batch_number)i.e. BSSE01,BSSE02 and so on#\n");
        sarch(temp);
    } else if(temp=='D') {
        sarch(temp);
    } else if(temp=='E') {
        printf("\t\t#Just Write BSSE(batch_number)i.e. BSSE01,BSSE02 and so on#\n");
        sarch(temp);
    }else if(temp=='F') {
        printf("\t\t#Just Write BSSE(batch_number)i.e. BSSE01,BSSE02 and so on#\n");
        sarch(temp);
    }else if(temp=='G') {
        printf("\t\t#Just Write BSSE(batch_number)i.e. BSSE01,BSSE02 and so on#\n");
        sarch(temp);
    }else if(temp=='H') {
        printf("\t\t#Just Write BSSE(batch_number)i.e. BSSE01,BSSE02 and so on#\n");
        sarch(temp);
    } else if(temp=='I') {
        sarch(temp);
    }  else if(temp=='J') {
        sarch(temp);
    }else if(temp=='K') {
        sarch(temp);
    } else if(temp=='L') {
        printf("\t\t#Just Write BSSE(batch_number)i.e. BSSE01,BSSE02 and so on#\n");
        sarch(temp);
    } else if(temp=='M') {
        sarch(temp);
    } else if(temp=='N') {
        printf("\t\t#Just Write BSSE(batch_number)i.e. BSSE01,BSSE02 and so on#\n");
        sarch(temp);
    }else if(temp=='O') {
        printf("\t\t#Just Write BSSE(batch_number)i.e. BSSE01,BSSE02 and so on#\n");
        sarch(temp);
    }else if(temp=='P') {
        printf("\t\t#Just Write BSSE(batch_number)i.e. BSSE01,BSSE02 and so on#\n");
        sarch(temp);
    }else if(temp=='Q') {
        printf("\t\t#Just Write BSSE(batch_number)i.e. BSSE01,BSSE02 and so on#\n");
        sarch(temp);
    } else if(temp=='R') {
        sarch(temp);
    }  else if(temp=='S') {
        sarch(temp);
    }
    return;
}

