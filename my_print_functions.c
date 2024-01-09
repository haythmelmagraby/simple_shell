#include "main.h"

/**
*my_putchar - this print single charachter
*@c: the character to print
*
**/

void my_putchar(const char c)
{
	write(1, &c, 1);
}

/**
*my_putint - this recursion function print integer givn
*@num: the number to split and print every single digit
*
**/

void my_putint(int num)
{
	int temp;

	if (num == 0)
	{
		my_putchar(num);
		return;
	}

	temp = num / 10;

	if (temp != 0)
		my_putint(temp);

	my_putchar(num % 10 + '0');
}

/**
*my_puts - this print loop on array of characters to print it
*@string: the array of characters to be printed
*
**/

void my_puts(const char *string)
{
	int i = 0;

	if (string == NULL)
		return;

	while (string[i] != '\0')
	{
		my_putchar(string[i]);
		i++;
	}
}

/**
*my_print - this function used to print to the consol
*@formate: varidic funtion parameters count as user inputs
*
**/

void my_print(char *formate, ...)
{
	va_list args;
	int i = 0;
	char *copy = copy_string(formate);

	if (formate == NULL)
		return;

	va_start(args, formate);

	while (copy[i] != '\0')
	{
		if ((copy[i] - '%') == 0)
		{
			i++;
			switch (copy[i])
			{
				case 'd':
					my_putint(va_arg(args, int));
					break;
				case 's':
					my_puts(va_arg(args, char *));
					break;
			}

		}
		else
		my_putchar(copy[i]);

		i++;
	}
	free(copy);
	va_end(args);
}
