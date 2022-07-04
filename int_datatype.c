#include<stdio.h>
// Its a inbuild library used to hold complier range deatils macros.
#include<limits.h>

int main(){
    // Int is a interger data type
    // Int can hold postive as well negtive value
    // Its called signed Int which is int.
    int number = 24 ;
    // INT_MIN used to tell complier int data type min range supported 
    // INT_MAX used to tell complier int data type max range supported 
    printf("Interger Minimum Value : %d\n", INT_MIN);
    printf("Interger Maximum Value : %d\n", INT_MAX);
    // uint or unsigned int is used to stored only postive value.
    // uint is not standard so use unsigned int always.
    // uint is min is zero 
    // It can never be over fill it cycle inside 0 to UINT_MAX.
    // So adding UNIT_MAX + 1 result in 0.
    unsigned int age = 25; // age can never be less then zero so using uint
    printf("Unsigned interger Minimum Value : %d\n", 0);
    printf("Unsigned interger Maximum Value : %d\n", UINT_MAX);
}