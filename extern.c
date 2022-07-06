#include<stdio.h>

// extern keyword is used to define a varaible or function 
// when varaible is define the memory wont be allocated to it 
// Memory will be allocated only when the varaible is declared.
// extern will extend the visiblity of the function or varaible though out the program even to multiple files.
// So when we use extern keyword for avarible we should decalr it to allocate the space for the varaible.
// A varaible can be defined many time in our code.

extern int a ;
int a;
int a;
int main(){ 
    int a = 45;
    return 0;
}