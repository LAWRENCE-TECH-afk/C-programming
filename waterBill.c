//Name:Lawrence Ndirangu Gicheru
//Reg No:CT100/G/30644/26

#include <stdio.h>

//function prototype
float totalBill(float number_of_units_consumed);
	
	int main() {
		
		//prompts the user to enter the water units consumed
		float units_consumed, waterBill;
		
		printf("Enter water units consumed: ");
		scanf("%f", &units_consumed);
		
		//function call
		waterBill = totalBill(units_consumed);
		
		//prints on the screen the total water bill calculated
		printf("Total water bill: %.2f KES \n", waterBill);
		
		return 0;
	}
	
	//function definition
float totalBill(float number_of_units_consumed) {
	
	float bill;
	
	//allows the program to make decisions on the bill charged according to the units consumed
	if (number_of_units_consumed <=30){
		bill = 20 * number_of_units_consumed;
	}
else if (number_of_units_consumed >=31 && number_of_units_consumed <=60){
		bill = 25 * number_of_units_consumed;
	}
	 else if (number_of_units_consumed > 60){
	 	bill = 30 * number_of_units_consumed;
	 }
	 
	 return bill;
}