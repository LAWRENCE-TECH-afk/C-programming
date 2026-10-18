//Name:Lawrence Ndirangu Gicheru
//Reg No:CT100/G/30644/26
//A program that checks whether the customer is eligible to be offered a loan

#include <stdio.h>

int main(){

	//declaration of variables
int age;
float annual_income;
//the user is prompted to enter age and annual income for the customer
printf("Enter the age: \t");
scanf("%d", &age);

printf("Enter annual income: \t");
scanf("%f", &annual_income);

//decision making statements to determine the loan elibility
if(age >= 21 && annual_income >= 21000){
	printf("Congratulations you qualify for a loan. \n");
}
else {
 printf("Unfortunately, we are unable to offer you a loan at this time. \n");	
}
 return 0;
 }

