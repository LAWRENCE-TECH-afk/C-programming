/*Name:Lawrence Ndirangu Gicheru
Reg no:CT100/G/30644/26
A program that displays different bundles offered by a mobile service provider
*/
#include <stdio.h>

//main function
int main() {
	
	//variable declaration
	int choice;
	
	//the menu
	printf("Select data bundle:\n");
	printf("1. 100MB @ 50 KES\n");
	printf("2. 500MB @ 200 KES\n");
	printf("3. 1GB @ 350 KES\n");
	printf("4. 2GB @ 600 KES\n");
	
	printf("======================\n");

	printf("Enter your choice (1-4): ");
	scanf("%d", &choice);//take user input
	
	printf("======================\n");
	//determines the option choosen
	switch (choice){
		case 1:
		printf("You selected 100MB. Cost = 50 KES");
		break;//exits the switch mode 
		
		case 2:
		printf("You selected 500MB. Cost = 200 KES");
		break;//exits the switch mode 
	
		case 3:
		printf("You selected 1GB. Cost = 350 KES");
		break;//exits the switch mode 
	
		case 4:
		printf("You selected 2GB. Cost = 600 KES\n");
		break;//exits the switch mode 
	
	default://handles any number that is not in the choices given
	printf("Invalid choice\n");
	
	}
return 0;
}
