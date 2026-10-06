//Name:Lawrence Ndirangu Gicheru
//Reg No:CT100/G/30644/26
//program for calculating the tax charged using the gross salary and calculates the net salary

#include <stdio.h>
//function prototype
float calculateTax(float grosssalary);

int main(){
	//declaration of variables
	float grosssalary, taxamount, netsalary;
	
	//prompting the user to enter the gross salary
printf("Enter Employee's Gross Salary: ");
	scanf("%f", &grosssalary);
	
	//function call
	taxamount = calculateTax(grosssalary);
	netsalary = grosssalary - taxamount;
	
	//printing results in 2 decimal places
printf("\n");
printf("The Gross Salary is Ksh.%.2f \n", grosssalary);
printf("The Tax Amount is Ksh.%.2f \n", taxamount);
printf("The Net Salary is Ksh.%.2f ",netsalary);
	  
	        
	return 0;
}

//function definition
float calculateTax(float grosssalary) {
	float taxamnt;
	if (grosssalary < 30000){
		taxamnt = 0.05 * grosssalary;
	}
	else if(grosssalary >= 30000 && grosssalary <= 59999){
		taxamnt = 0.1 * grosssalary;
	}
	else if(grosssalary >= 60000){
		taxamnt = 0.15 * grosssalary;
	}
	
	return taxamnt;
}
