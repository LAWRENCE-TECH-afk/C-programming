/*Name:Lawrence Ndirangu Gicheru
Reg No:CT100/G/30644/26
A program that records the hotels revenue for each day of the weeek
*/
#include<stdio.h>

//main function
int main(){

	//declare  a 1D array for 7 days
	int revenue[7];
	//declaration of variables
	int i, sum=0;
	float average;
	
	printf("Enter the revenue for each day of the week \n");
	printf("=======================================\n");
	
	for(i=0; i<7; i++){
	printf("Day %d\t", i + 1);
	scanf("%d", &revenue[i]);//takes input from the user
	
	//calculating the total revenue and the average  
	sum = sum + revenue[i];
	average = sum/7;
	}
	//displays the calculation results
	printf("\n");
	printf("----The sum is Ksh. %d \n", sum);
	printf("----The average is Ksh. %.2f \n", average);

return 0;

}