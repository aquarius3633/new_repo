#include <iostream>

using namespace std;

int main() {

    int* p;// declaration of pointer variable p. this is stored in stack

    p = new int;// create a block of memory from heap and store size is integer

    *p = 10;// using deference pointer variable to sign value 10 to the block of memory which created previously on heap

    delete p;// remove and clear the memory block the pointer points in heap

    p = new int[6]; //create a new block of memory from heap and store array

    int *p[6] = {2,35,4,6,9,1}; //using pointer variable to sign values to the block of memory which created previously on heap

    for(int i = 0; i < 6; i++)
        cout << *p[i] << endl; //print out the value on screen

    delete[] p; //reemove and clear the memory from heap
    return 0;
}