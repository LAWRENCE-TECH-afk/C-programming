//Name:Lawrence Ndirangu Gicheru
//Reg No:CT100/G/30644/26
//A program that checks if a student is eligible for final exams

#include <stdio.h>

int main(){
	//Declaration of variables 
	float attendance, avrgMarks;
	
	//prompting the user to enter the attendance and the avrge marks of student
	printf("Enter student's Attendance Percentage: \t");
	scanf("%f" ,&attendance);
	
	printf("Enter the Average Marks: ");
	scanf("%f", &avrgMarks);
	
	//this allows the program to make decisions based on the conditions provided
	if(attendance >= 75 && avrgMarks >= 40){
		printf("Eligible \n");
	}
	else{
		printf("Not eligible \n");
	}
	return 0;
}