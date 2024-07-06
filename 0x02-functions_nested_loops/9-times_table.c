#include <stdio.h>

int main()
{
   int a = 0;

 for (a = 0; a <= 9; ++a) 
   { 
         for (int x =0 ; x <= 9; x++)
         {   
	     (x == 9 ) ? printf ("%2d\n", a * x) : // how I printed a new line for the 2nd version and used the 
//	     this version  (...) ? <statement> : <statement> of "if else"
//	     to achieve what was done by the putchar command outside the for loop
             printf ("%2d, ", a * x);
         }      
//   putchar (10);      how I printed a new line for the version of the program 
//   ++a;
   }
   return (0);
}

