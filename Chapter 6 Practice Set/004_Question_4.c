#include<stdio.h>

void sumAndAvg(int a, int b, int *sum, float *avg){
    *sum = a+b;
    *avg = (float)(*sum)/2;
}

int main()
{
    // Question :-
    /* Write a program using a function that calculates the sum 
    and average of two numbers. Use pointers and print the values 
    of sum and average in main().*/
    
    int i, j, sum;
    float avg;
    printf("Enter two numbers to get the sum and average of the two numbers you entered :-\n");
    scanf("%d" , &i);
    scanf("%d" , &j);
    sumAndAvg(i, j, &sum, &avg);
    printf("The sum is %d \n", sum);
    printf("The average is %f \n", avg);

    return 0;
}