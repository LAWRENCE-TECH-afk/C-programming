/*
Name:Lawrence Ndirangu Gicheru
Reg No:CT100/G/30644/26
A program that calculates electricity bills using c user defined functions
*/

//User defined Function

//function prototype
float calculateEnergyCharge(float unitsconsumed);
float calculateTax(float energycharge);
float calculateTotalBill(float energycharge, float tax);


#include <stdio.h>

//main function
int main() {
	//declaration of variables
	float unitsconsumed, energycharge, tax, totalbill;
	
	//the user is prompted to enter the units consumed for computation
	printf("Enter the electricity units consumed:\t");
	scanf("%f", &unitsconsumed);
	
	
	
	//function call
	energycharge = calculateEnergyCharge(unitsconsumed);
	tax = calculateTax(energycharge);
	totalbill = calculateTotalBill(energycharge, tax);
	
	//the results are displayed to the user
	printf("\n");
	printf("--------------------------------------------\n");
	printf("The energy charges for the electricity units is ksh. %.2f \n", energycharge);
	printf("The tax charged is ksh. %.2f \n", tax);
	printf("The Total Electricity bill is ksh. %.2f \n", totalbill);
	printf("--------------------------------------------");
	
	return 0;
}

//function defination
float calculateEnergyCharge(float unitsconsumed){
	float energycharge;
	
	if (unitsconsumed <=50){
		energycharge = 10 * unitsconsumed;
		
	}
	
	else if(unitsconsumed > 50 &&unitsconsumed <= 150){
		energycharge = 50 *10 + (unitsconsumed - 50)*15;
	}
	
	else if(unitsconsumed > 150){
		energycharge = 50 * 10 + 100 * 15 + (unitsconsumed -150)*20;
		
		
	}
	return energycharge;
}

//function defination
float calculateTax(float energycharge){
	float tax;
	
	tax = 0.1 * energycharge;
	
	return tax;
}

//function defination
float calculateTotalBill(float energycharge, float tax){
	float bill;
	
	bill = energycharge + tax;
	
	return bill;
}