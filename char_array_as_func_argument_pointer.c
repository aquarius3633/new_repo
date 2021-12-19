//array as function argument ALWAYS pass by reference
//Here is the an example of character array as function argument pass by reference

#include <stdio.h>

void print(char* C)
{	
	
	while(*C != '\0'){
		printf("%c",*C);
		C++;
	}
	printf("\n");
}



int main() {

	char C[20] = "The testing";
	print(C);
}
