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

	printf("Size of a char:%d byte(s)\n", sizeof(c));
	printf("size of a int:%d byte(s)\n", sizeof(i));
	printf("size of a long int:%d byte(s)\n", sizeof(li));
	printf("size of a long long int:%d byte(s)\n", sizeof(lli));
	printf("size of a float:%d byte(s)\n", sizeof(f));
	return (0);
}
