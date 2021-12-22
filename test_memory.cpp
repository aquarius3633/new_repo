#include <iostream>
#include <new>
using namespace std;

int main() {
    int i, n;
    int* p;// declaration of pointer variable p. this is stored in stack

    p = new int;// create a block of memory from heap and store size is integer

    *p = 10;// using deference pointer variable to sign value 10 to the block of memory which created previously on heap

    delete p;// remove and clear the memory block the pointer points in heap
    cout << "Please enter number of digits you would like to store: ";
    cin >> i;
    p = new int[i]; //create a new block of memory from heap and store array

   for (n = 0; n < i; n++) 
   {
       cout << "Enter your number: ";
       cin >> p[n]; //using pointer variable to sign values to the block of memory which created previously on heap
   };
    for(n = 0; n < 6; n++)
        cout << p[n] << endl; //print out the value on screen

    delete[] p; //reemove and clear the memory from heap
    return 0;
}