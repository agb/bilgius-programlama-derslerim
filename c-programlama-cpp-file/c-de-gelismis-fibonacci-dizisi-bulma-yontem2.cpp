#include <math.h>
#include <stdio.h>
 
/* http://www.bilgius.com/altin-oran-nedir/ */
#define PHI pow(M_E, asinh(0.5))
 
/* Fibonacci sayýsýný altýn oran ile bulma */
double fib (unsigned int n)
{
    return((pow(PHI, (double)n)) / sqrt(5.0));
}
 
int main (void)
{	int x,f; 
    printf("Fibonacci dizisi kacinci degere kadar sursun?"); scanf("%d",&f);
    for (x = 0; x < f; x=x+1)
	    {
	        printf("%5d%40.0f\n", x, fib(x));
    	}
    
    return(0);
}
