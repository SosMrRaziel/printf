#include "main.h"

/**
* pchar - write the character c
* @c: the character that will be printed
* Return: 1 on success -1 when it error
**/

int pchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * pint - print intger
 * @num: number
 * Return: idk
 */
int pint(int num)
{
	char s[20];

	sprintf(s, "%d", num);
	write(1, s, strlen(s));

	return (strlen(s));
}
