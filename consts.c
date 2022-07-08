#include<stdio.h>
// There are two ways to define constant.
// #define preprocess
// const key word

// Data defined by the #define macro definition are preprocessed,
// so that your entire code can use it.
// This can free up space and increase compilation times.

// CONSTs are handled by the compiler,
// where as #DEFINEs are handled by the pre-processor.

#define AREA 3.5

// The big advantage of const over #define is type checking
const int VOLUME = 34;

int main(){
    // puts and printf can only print consts char only 
    // To print varaibles we need to do it in printf by format string
    printf("%d", VOLUME);
}