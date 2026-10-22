/*Name:Lawrence Ndirangu Gicheru
Reg no:CT100/G/30644/26
A program that uses for loop to print numbers from 100 to 50 in descending order
*/
#include <stdio.h>

//main function
int main() {
	//variable declaration
	int i;
	
	for (i = 100; i >= 50; i--){//it starts with 100 and subtracts one untill 50
		printf("%d\n", i);//prints each number in its own line
	}
	
return 0;//the program ends
}