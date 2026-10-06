//Name:Lawrence Ndirangu Gicheru
//Reg No:CT100/G/30644/26
//A program that calculates electricity bill

#include <stdio.h>

//function declaration
float calculateElectricBill(float number_of_units_consumed);

int main () {
	
		float number_of_units_consumed, electricbill;
		
		printf("Enter the number of units consumed: \t");
		scanf("%f", &number_of_units_consumed);
	
		//function call
		electricbill = calculateElectricBill(number_of_units_consumed);
		
		printf("\n");
		printf("Units Consumed: %.2f \n", number_of_units_consumed);
		printf("Electric bill is: Ksh.%.2f \n", electricbill);
		
		return 0;
}
		//function definition
		float calculateElectricBill(float number_of_units_consumed){

float bill;

if(number_of_units_consumed <= 100){
	bill = 10 * number_of_units_consumed;
}
else if(number_of_units_consumed > 100 && number_of_units_consumed <=200){
	bill = 10*100 + (number_of_units_consumed -100) *15;
}
else if(number_of_units_consumed >200) {
	bill = 10*100 + 15 * 100 + (number_of_units_consumed - 200) * 20;
}

return bill;
}
