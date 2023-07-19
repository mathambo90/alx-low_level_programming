#include "main.h"
/**
 * _islower - check character size
 * @c: int character
 * Description : function that checks for lowercase character
 * Return : always zero
 */
int _islower(int c)
{
	if (c =>'a' && c<= 'z')
		return(1);
	else
		return(0);
}
