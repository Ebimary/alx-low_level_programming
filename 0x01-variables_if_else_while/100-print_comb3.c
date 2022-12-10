#include <stdio.h>

/**
 * main - prints all possible differnt combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ones = '0';
	    int tens = '0';

	    for (tens = '0'; tens <= '9'; tens++)/*Print tens digit*/
	    {
		   	 for (ones = '0'; ones <= '9'; ones++)/*print ones digit*/
		    {
			    if (!((ones == tens) || (tens > ones)))/*eleminates repitition*/
			    {
				    putchar(tens);
				    putchar(ones);
				    if (!(ones == '9' && tens == '8'))/*addes command space*/
				    {
					    putchar(',');
					    putchar(' ');
				    }
			    }
		    }
	    }	   
	    putchar('\n');
	    return (0);
}
