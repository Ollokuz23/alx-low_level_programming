#include <stdlib.h>
#include <time.h> 
#include <stdio.h> 
  
/**
 * main - prints out a number after passing through the if else statements
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if( n > 0 ){
		printf("n is positive\n");
	} else if(n < 0){
		printf("n is negative\n");
	} else{
		printf("n is zero\n");
	}
	return (0);
} 
		           
		    
		            
		             
		          
			            
		      
