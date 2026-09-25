 // Name: Lawrence Ndirangu Gicheru
// Reg No: CT100/G/30644/26
#include <stdio.h>

int main () {
	//declare variables
	float height; //%f
	double bank_balance; //%lf
	char phone_number[15]; //%s
	
	printf("Enter your height (in metres or centimetres) \t");
	scanf("%f" ,&height);
	
	printf("Enter your bank balance(in Kenya shillings) \t");
	scanf("%lf" ,&bank_balance);
	
	printf("Enter your phone number \t");
	scanf("%s" ,phone_number);
	
	printf("The height is %.2f \n", height );
	printf("The bank_balance is %.2lf \n", bank_balance );
	printf("The phone_number is %s \n", phone_number );
	
	return 0;
	
}