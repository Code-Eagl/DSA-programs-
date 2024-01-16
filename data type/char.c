#include<stdio.h>
#include<conio.h>

//this is the global  veriable, can be accessed by any function
int var1 = 1; 
int main(){
    //var is the local veriable of main function
    char var =65;
    printf("%c \n", var);
    printf("%d", var);
    printf("%d",var1 );
    return 0;
}
int fun(){
    //var is different from var in main vesible to fun
    int var = 6;
    printf("%d \n", var);
    printf("%d", var1);
}
