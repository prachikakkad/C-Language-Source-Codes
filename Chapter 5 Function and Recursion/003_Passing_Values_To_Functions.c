#include<stdio.h>  
  
void swap(int, int);  
  
int main()  
{  
    int a, b;  
  
    printf("Enter value of a :-\n");  
    scanf("%d", &a); 
    printf("Enter value of b :-\n");  
    scanf("%d", &b);  
  
    printf("\nBefore swapping: a = %d and b = %d\n\n", a, b);  
  
    swap(a, b);  
  
    return 0;  
}  
  
void swap(int x, int y)  
{  
    int temp;  
  
    temp = x;  
    x    = y;  
    y    = temp;  
  
    printf("After swapping: a = %d and b = %d\n", x, y);  
}  