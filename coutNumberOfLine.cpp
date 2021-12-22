#include <iostream>
#include <cstdio>
using namespace std;
int main(){

    int c, nl;
    while((c = getchar()) != EOF){
        if(c == '\n'){
            nl++;
        };  
    };
    
    cout << nl << " lines enteredone";
    return 0;
}