/*
The name of a array => returns the address of first element of the array => which is the pointer variable of the array

2-D array:

B[3][4] 

B[3] is the name of array with 4 elements => returns the address of the first element of the array => &B[3][0]
*/


#include <stdio.h>

int main() {

	int A[] = {2,4,5,8,1};
	for(int i = 0; i < 5; i++)
	{
		printf("Address = %d\n", &A[i]);
		printf("Address = %d\n", A+i);
		printf("Value = %d\n", A[i]);
		printf("Value = %d\n", *(A+i));
	}
}