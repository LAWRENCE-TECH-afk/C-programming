//Name:Lawrence Ndirangu Gicheru
//Reg No:CT100/G/30644/26
//A program that calculates electricity bill

#include <stdio.h>
//function prototype
float calculateBill(float number_of_units_consumed);

int main() {
	float units_consumed, electricity_bill;
	printf("Enter the number of units consumed: \t");
	scanf("%f", &units_consumed);
	//function call
	electricity_bill = calculateBill(units_consumed);
	
	printf("\n");
	printf("KENYA POWER PROGRAM \n");
	printf("======================= \n");
	printf("Number of units consumed: %.2f \n", units_consumed);
	printf("Total electricity bill: Ksh.%.2f \n", electricity_bill);
	printf("======================= \n");
	
	return 0;
}
//function definition
float calculateBill(float units_consumed){
	float bill;
if(units_consumed <= 100){
	bill = 10 * units_consumed;
}
else if(units_consumed > 100 && units_consumed <=200){
	bill = 10*100 + (units_consumed -100) *15;
}
else if(units_consumed >200) {
	bill = 10*100 + 15 * 100 + (units_consumed - 200) * 20;
}

return bill;
}
