// C program to demonstrate printing of 
// our own name using scanf() 
#include <stdio.h> 

int main() 
{ 
	char name[20]; 
	printf("Enter name: "); 

	// user input will be taken here 
	scanf("%s", name); 
	printf("Your name is %s.", name); 
	return 0; 
}
