/*
Name:Lawrence Ndirangu Gicheru
Reg No:CT100/G/30644/26
A sales calculation program that uses c functions
*/

//User defined Function

//function prototype
float calculateSubtotal(int product1, int product2, int product3, int product4, int product5);
float calculateDiscount(float subtotal);
float calculateFinalAmount(float subtotal, float discount);

#include <stdio.h>

//main function
int main () {
	//declaration of variables
	int product1, product2, product3, product4, product5;
	float subtotal, discount, finalamount;
	
	//asks the user to enter the price of each product and using scanf the user collects the prices
	printf("Enter the price of each of the five product:");
	scanf("%d%d%d%d%d", &product1, &product2, &product3, &product4, &product5);
	
	printf("\n");
	printf("============================================= \n");

	
	//function call
	subtotal = calculateSubtotal(product1, product2, product3, product4, product5);
	discount = calculateDiscount(subtotal);
	finalamount = calculateFinalAmount(subtotal, discount);
	
	printf("\n");

	printf("The Total cost for the five products is Ksh. %.2f \n", subtotal);
	printf("The Total Discount  is ksh. %.2f \n", discount);
	printf("The final Amount Payable is Ksh. %.2f \n", finalamount);
	
	printf("------------------------------------------------------------ ");
	
	return 0;
}

//function declaration
float calculateSubtotal(int product1, int product2, int product3, int product4, int product5){
	
	float total;
	
	//the total price is calculated
	total = product1 + product2 + product3 + product4 + product5;
	
	return total;
}

//function declaration
float calculateDiscount(float subtotal){

float discount;

//the discount is determined by the total price using the if and else if
if (subtotal >10000){
	discount = 0.1 * subtotal;
	
}
else if(subtotal >=5000 && subtotal <= 9999){
	discount = 0.05 * subtotal;
}
else if(subtotal < 5000){
	discount = 0;
}
return discount;

}


//function declaration
float calculateFinalAmount(float subtotal, float discount){
	
	float finalamount;
	
	//final amount 
	finalamount = subtotal - discount;
	
	return finalamount;
}