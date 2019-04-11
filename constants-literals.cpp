#include <iostream>
using namespace std;

#define LEGNTH 10
#define WIDTH 5
#define NEWLINE '\n'
//these are global constant they can be used in all functions. They can not be changed by a function.

int main() {
    int area;

    const int len = 100;
    const int wid = 5;
    const char nextline = '\n';
    //const mostly used inside functions
    int space;

    area = LEGNTH * WIDTH;


    cout << "Hello\tWorld\n\n";

    cout << area;
    cout << NEWLINE;

        
    

    space = len * wid;
    
    cout << space;
    cout << nextline;   
    
    return 0;

}