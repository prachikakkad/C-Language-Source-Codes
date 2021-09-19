#include<stdio.h>

int address(int i);

int main()
{
    // Question :-
    /* Write a program having a variable i. Print the address
    of i. Pass this variable to a function and print its 
    address. Are these addresses same? Why? */
    
    int i;
    printf("Address of i is %u\n",&i);
    address(i);
    
    return 0;  
}
int address(int i)
{
	printf("Address of i is %u\n" , &i);
}