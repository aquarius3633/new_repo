//this little script counts number of characters user entered and print out on screen


#include <iostream>
#include <cstdio>  //getchar() function

using namespace std;

int main(){
    
    int nc;
    while (getchar()!= EOF){
        nc++;
    };
    cout << nc;
    return 0;
}