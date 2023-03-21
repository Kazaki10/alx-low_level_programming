#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * return: 0 (success)
 */
void jack_bauer(void)
{
	int w, x, y, z;

	for (w = 0; w <= 2; w++)
	{
		for (x = 0; x <= 9; x++)
		{
			for (y = 0; y <= 5; y++)
			{
				for (z = 0; z <= 9; z++)
				{
					if (w >= 2 && x >= 4)
						break;
					_putchar(w + '0');
					_putchar(x + '0');
					_putchar(':');
					_putchar(y + '0');
					_putchar(z + '0');
					_putchar('\n');
				}
			}
		}
	}
}
