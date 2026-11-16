/*
Name:Lawrence Ndirangu Gicheru
Reg No:CT100/G/30644/26
A program that calculates the weekly salary using a function
*/

//user defined function

#include <stdio.h>

//function declaration
float calculateSalary(float hourwage, int hours_worked){
	
	//declaration of variables
	float weekly_salary;
	
	weekly_salary = hourwage * hours_worked * 7;
	
	return weekly_salary;
	
}

//main function
int main (){
	
	//declaration of variables
	int hours_worked;
	float weekly_salary, hourwage;
	
	//the user enters the hours worked and the hourly wage for calculation
	printf("Enter the hours worked:\t");
	scanf("%d", &hours_worked);
	
	printf("=========================== \n");

	printf("Enter the hourly wage: \t");
	scanf("%f", &hourwage);
    
	printf("=========================== \n");
    
	printf("\n");
	//function call
	weekly_salary = calculateSalary(hourwage ,hours_worked);
	
	printf("The employee's weekly salary is  Ksh.%.2f \n", weekly_salary);
	printf("----------------------------------------------- ");
	
return 0;	
}
