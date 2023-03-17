#include<stdio.h>
/**
* main - Entery
*
* Return: 0 (successful)
*/
int main(void)
{
	int nm;

	for (nm = '0'; nm <= '9'; nm++)
{
	putchar(nm);
	if (nm != '9')
	{
		putchar(',');
		putchar(' ');
	}
}


	putchar('\n');

	return (0);
}

