#include<stdio.h>
#include<conio.h>
#include<limits.h>

int demo(){
    printf("This is to know the soze of allmost all data type\n");
}
int Int(){
    int var1 = INT_MIN;
    int var2 = INT_MAX;
    printf("Range of signed integer is is from %d to %d \n", var1, var2);
    printf("the size of %d is %d \n", var1, sizeof(var1));
}
int unint(){
    long unsigned int var1 =0;
    long unsigned int var2 = UINT_MAX;
    printf("Range of unsigned integer is fro %u to %u \n", var1,var2);
    printf("The size of %u is %u \n", var2, sizeof(var2)); 
}
int shint(){
    int var1 =SHRT_MIN;
    int var2 = SHRT_MAX;
    printf("Range of short integer is fro %d to %d \n", var1,var2);
    printf("The size of %d is %d \n", var2, sizeof(var2)); 
}
int unshint(){
    short unsigned int var1 =0;
    short unsigned int var2 = USHRT_MAX;
    printf("Range of unsigned integer is fro %u to %u \n", var1,var2);
    printf("The size of %u is %u \n", var2, sizeof(var2)); 
}


int main(){
    demo();
    Int();
    unint();
    shint();
    unshint();

    
}