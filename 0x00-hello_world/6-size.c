#include<stdio.h>
/**
 * main - input
 *
 * Return: 0 (successful)
 */
int main(void)
{
	int i;
	long int li;
	char c;
	float f;
	long long int lli;

	printf("Size of a char:%lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of a int:%lu byte(s)\n", (unsigned long)sizeof(i));
	printf("size of a long int:%lu byte(s)\n", (unsigned long)sizeof(li));
	printf("size of a long long int:%lu byte(s)\n", (unsigned long)sizeof(lli));
	printf("size of a float:%lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
