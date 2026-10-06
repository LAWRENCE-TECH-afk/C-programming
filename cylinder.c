//Name:Lawrence Ndirangu Gicheru
//Reg no:CT100/G/30644/26
//A program that prompts the user to enter radius and height of cylinder and calculates volume and surface area


//
#include <stdio.h>


int main(){
	//declaring of variables
	float PI, radius, height, surface_area, volume;
	
	//asks the user to enter the height and radius which will be stored in height and radius variables respectively
	printf("Enter the height:\t");
	scanf("%f", &height);
	
	printf("Enter the radius:\t");
	scanf("%f", &radius);
	
	//giving PI a value, calculating the volume and the surface area of cylinder
	PI = 3.142;
	volume = PI * radius * radius * height;
	surface_area = 2 * PI * radius * radius + 2 * PI * radius * height;
	
    //printing results rounded to two decimal places
	printf("\n");
	printf("Volume of the cylinder: %.2f \n", volume);
	printf("surface area of the cylinder: %.2f \n", surface_area);

//the program has ended
return 0;
}
