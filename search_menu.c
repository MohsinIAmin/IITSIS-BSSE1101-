#include"function.h"
void search_menu()
{    char temp;
    printf("\t\t#SEARCH OPTIONS\n");
    printf("\t\t#By NAME(press 1)\n\t\t#By ROLL(press 2)\n\t\t#REGISTRATION NO.(press 3)\n\t\t#");
    int i=0;
    fflush(stdin);
    scanf("%d",&i);
    if(i==1) {
        printf("\t\t#NAME[FULL HISTORY](press 1)\n");
        printf("\t\t#NAME[PROFILE](press 4)\n\t\t#");
    }
    if(i==2) {
        printf("\t\t#INDIVIDUAL(press 1)\t\t#BATCH(press 2)\n\t\t#COMPARISON(press 3)\n\t\t#");
        int j=0;
        fflush(stdin);
        scanf("%d",&j);
        if(j==1) {
            printf("\t\t#ROLL[FULL HISTORY](press 2)\n");
            printf("\t\t#ROLL[PROFILE](press 5)\n");
            printf("\t\t#ROLL[FULL RESULT](press 9)\n");
            printf("\t\t#ROLL[CGPA AT A SEMESTER](press B)\n");
            printf("\t\t#ROLL[CGPA OF ALL SEMESTER](press D)\n");
            printf("\t\t#ROLL[GPA AT A SEMESTER](press K)\n");
            printf("\t\t#ROLL[GPA OF ALL SEMESTER](press M)\n");
            printf("\t\t#ROLL,SUBJECT[MARK](press T)\n\t\t#");
        } else if(j==2) {
            printf("\t\t#ROLL[BATCH FULL HISTORY](press 7)\n");
            printf("\t\t#ROLL[BATCH PROFILE](press 8)\n");
            printf("\t\t#ROLL[BATCH FULL RESULT](press A)\n");
            printf("\t\t#ROLL[BATCH CGPA AT A SEMESTER](press C)\n");
            printf("\t\t#ROLL[BATCH CGPA OF ALL SEMESTER](press E)\n");
            printf("\t\t#ROLL[BATCH GPA AT A SEMESTER](press L)\n");
            printf("\t\t#ROLL[BATCH GPA OF ALL SEMESTER](press N)\n");
            printf("\t\t#ROLL,SUBJECT(BATCH)[MARK](press Y)\n\t\t#");
        } else if(j==3) {
            printf("\t\t#INDIVUDIAL(press 1)\n\t\t#BATCH(press 2)\n\t\t#");
            int k=0;
            fflush(stdin);
            scanf("%d",&k);
            if(k==1) {
                printf("\t\t#ROLL[INDIVUDIAL CGPA OVER](press I)\n");
                printf("\t\t#ROLL[INDIVIDUAL CGPA UNDER](press J)\n");
                printf("\t\t#ROLL[OVER MARK](press U)\n");
                printf("\t\t#ROLL[UNDER MARK](press V)\n");
                printf("\t\t#ROLL[OVER GPA](press W)\n");
                printf("\t\t#ROLL[UNDER GPA](press X)\n\t\t#");
            } else if(k==2) {
                printf("\t\t#ROLL[BATCH CGPA OVER](press F)\n");
                printf("\t\t#ROLL[BATCH CGPA UNDER](press G)\n");
                printf("\t\t#ROLL[BATCH GPA OVER](press O)\n");
                printf("\t\t#ROLL[BATCH GPA UNDER](press P)\n");
                printf("\t\t#ROLL(BATCH)[OVER MARK](press Z)\n");
                printf("\t\t#ROLL(BATCH)[UNDER MARK](press a)\n");
                printf("\t\t#ROLL(BATCH)[OVER GPA](press b)\n");
                printf("\t\t#ROLL(BATCH)[UNDER GPA](press c)\n");
                printf("\t\t#ROLL,SUBJECT(BATCH)[OVER MARK](press d)\n");
                printf("\t\t#ROLL,SUBJECT(BATCH)[UNDER MARK](press e)\n");
                printf("\t\t#ROLL,SUBJECT(BATCH)[OVER GPA](press f)\n");
                printf("\t\t#ROLL,SUBJECT(BATCH)[UNDER GPA](press g)\n\t\t#");
            }
        }
    }
    if(i==3) {
        printf("\t\t#REGISTRATION NO[FULL HISTORY](press 3)\n");
        printf("\t\t#REGISTRATION NO[PROFILE](press 6)\n\t\t#");
    }
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
    } else if(temp=='F') {
        printf("\t\t#Just Write BSSE(batch_number)i.e. BSSE01,BSSE02 and so on#\n");
        sarch(temp);
    } else if(temp=='G') {
        printf("\t\t#Just Write BSSE(batch_number)i.e. BSSE01,BSSE02 and so on#\n");
        sarch(temp);
    } else if(temp=='H') {
        printf("\t\t#Just Write BSSE(batch_number)i.e. BSSE01,BSSE02 and so on#\n");
        sarch(temp);
    } else if(temp=='I') {
        sarch(temp);
    }  else if(temp=='J') {
        sarch(temp);
    } else if(temp=='K') {
        sarch(temp);
    } else if(temp=='L') {
        printf("\t\t#Just Write BSSE(batch_number)i.e. BSSE01,BSSE02 and so on#\n");
        sarch(temp);
    } else if(temp=='M') {
        sarch(temp);
    } else if(temp=='N') {
        printf("\t\t#Just Write BSSE(batch_number)i.e. BSSE01,BSSE02 and so on#\n");
        sarch(temp);
    } else if(temp=='O') {
        printf("\t\t#Just Write BSSE(batch_number)i.e. BSSE01,BSSE02 and so on#\n");
        sarch(temp);
    } else if(temp=='P') {
        printf("\t\t#Just Write BSSE(batch_number)i.e. BSSE01,BSSE02 and so on#\n");
        sarch(temp);
    } else if(temp=='Q') {
        printf("\t\t#Just Write BSSE(batch_number)i.e. BSSE01,BSSE02 and so on#\n");
        sarch(temp);
    } else if(temp=='R') {
        sarch(temp);
    }  else if(temp=='S') {
        sarch(temp);
    } else if(temp=='T') {
        sarch(temp);
    } else if(temp=='U') {
        sarch(temp);
    } else if(temp=='V') {
        sarch(temp);
    } else if(temp=='W') {
        sarch(temp);
    } else if(temp=='X') {
        sarch(temp);
    } else if(temp=='Y') {
        printf("\t\t#Just Write BSSE(batch_number)i.e. BSSE01,BSSE02 and so on#\n");
        sarch(temp);
    } else if(temp=='Z') {
        printf("\t\t#Just Write BSSE(batch_number)i.e. BSSE01,BSSE02 and so on#\n");
        sarch(temp);
    } else if(temp=='a') {
        printf("\t\t#Just Write BSSE(batch_number)i.e. BSSE01,BSSE02 and so on#\n");
        sarch(temp);
    } else if(temp=='b') {
        printf("\t\t#Just Write BSSE(batch_number)i.e. BSSE01,BSSE02 and so on#\n");
        sarch(temp);
    } else if(temp=='c') {
        printf("\t\t#Just Write BSSE(batch_number)i.e. BSSE01,BSSE02 and so on#\n");
        sarch(temp);
    }else if(temp=='d') {
        printf("\t\t#Just Write BSSE(batch_number)i.e. BSSE01,BSSE02 and so on#\n");
        sarch(temp);
    } else if(temp=='e') {
        printf("\t\t#Just Write BSSE(batch_number)i.e. BSSE01,BSSE02 and so on#\n");
        sarch(temp);
    } else if(temp=='f') {
        printf("\t\t#Just Write BSSE(batch_number)i.e. BSSE01,BSSE02 and so on#\n");
        sarch(temp);
    } else if(temp=='g') {
        printf("\t\t#Just Write BSSE(batch_number)i.e. BSSE01,BSSE02 and so on#\n");
        sarch(temp);
    }
    return;
}

