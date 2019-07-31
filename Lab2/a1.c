#include<stdio.h> 

// Returns floor of square root of x 
int sqrt(int x) 
{ 
    // Base cases 
    if (x == 0 || x == 1) 
    return x; 
  
    // Staring from 1, try all numbers until 
    // i*i is greater than or equal to x. 
    int i = 1, result = 1; 
    while (result <= x) 
    { 
      i++; 
      result = i * i; 
    } 
    return i - 1; 
} 
  
// Driver program 
int main() 
{ 
    int x ;
    printf("Enter n\n");
    scanf("%d",&x);
    printf("%d\n",sqrt(x) );
    return 0; 
} 