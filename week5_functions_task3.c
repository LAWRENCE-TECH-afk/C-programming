/*Name:Lawrence Ndirangu Gicheru
Reg No:CT100/G/30644/26
A program that converts temperture from deg F to deg C
*/

#include <stdio.h>
//function prototype
float convertToCelsius(float temperatureInFahrenheit);

//main function
int main(){
	float celsius, temperatureInFahrenheit;
	
	printf("Enter Temperature in Fahrenheit: ");
	scanf("%f", &temperatureInFahrenheit);
	
	//function call
	celsius = convertToCelsius(temperatureInFahrenheit);
	printf("\n");
	printf("The Temperature in degrees fahrenheit is: %.2f deg F\n", temperatureInFahrenheit);
	printf("The Temperature in degrees celsius is: %.2f deg C \n", celsius);
	
	return 0;
}

//function defination
float convertToCelsius(float temperatureInFahrenheit){
	float celsius;
	celsius = (temperatureInFahrenheit - 32) * 5/9;
	
	return celsius;
}