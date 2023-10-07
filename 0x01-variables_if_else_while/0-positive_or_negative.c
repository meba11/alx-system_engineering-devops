#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints if the number is posetives, zero or negetive
* Return: Always (Success)
* 
*/


/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n>0)
	  {
	    printf("%d is posetive \n", n);
	  }
	else if(n==0)
	      
	      {
		printf("%d id zero \n", n);
	      }
	    else
	      {
		printf("%d is negetive \n", n);
	      }
		return (0);
}
	
