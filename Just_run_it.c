//Run on Windows
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int main(){
int j=10;
system("gcc calculate_gpa.c data.h function.h input_marks.c input_profile.c main.c marks_input_menu.c menu.c print_cgpa.c print_gpa.c print_result.c search_1.c search_2.c search_menu.c searching.c show_raw_data.c subject_name.c update_cgpa.c -o IITSIS(BSSE1101) -Wall");
unsigned int retTime = time(0) + 10;
    while (time(0) < retTime){
		if(time(0)==(retTime-j)){
			printf("Please Waits:%dseconds\n",j);
			j--;
		}
    }
system("start IITSIS(BSSE1101).exe");
return 0;
}
