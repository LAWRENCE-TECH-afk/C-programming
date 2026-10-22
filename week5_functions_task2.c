/*Name:Lawrence Ndirangu Gicheru
Reg No:CT100/G/30644/26
A program that calculates fare at the fare rate of Ksh 50 per kilometre
*/

#include <stdio.h>
//function prototype
float calculateFare(float distance_travelled);

//MAIN FUNCTION
int main() {

float fare, distance_travelled;

printf("Enter the distance travelled: ");
scanf("%f", &distance_travelled);

//function call
fare = calculateFare(distance_travelled);

printf("\n");
printf("Total Distance travelled is: %.2f Km\n", distance_travelled);
printf("Total Fare is: %.2f Ksh\n", fare);
	
	return 0;
}

//function definition
float calculateFare(float distance_travelled){
	float fare;
	//calculates fare 
	fare = 50 * distance_travelled;
	
	return fare;//displays the result to the user
}
