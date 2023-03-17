#include<stdio.h>
/**
* main - Entery
*
* Return: 0 (succesful)
*/
int main(void)
{
	int az;

	for (az = 'a'; az <= 'z'; az++)
	{
	if (az == 'e' || az == 'q')
	{
		continue;
	}
	putchar(az);
	}
	putchar('\n');
	return (0);
}
