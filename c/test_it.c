/**
 * _abs - absolute value of an integer
 * @i: interger to computer
 *
 * Return: absolute value;
 */
int _abs(int i)
{
	if (i < 0)
	{
		i = i * -1;
		return (i);
	}
	else
		return (i);
}

/**
 * itoa - integer to string
 * @n: integer
 * @s: array of chars
 *
 * Return: int
 */
int itoa(int n, char s[])
{
	int i;

	i = 0;
	if (n / 10 != 0)
		i = itoa(n / 10, s);
	else if (n < 0)
		s[i++] = '-';

	s[i++] = _abs(n % 10) + '0';
	s[i] = '\0';

	return (i);
}

/**
 * my_number - prints numbers
 * @n: number
 * Return: number
 */

int my_number(int n)
{
char buffer[5];

itoa(n, buffer);
}

int main() 
{
	my_number(123)
	printf("%d\n", i);
	
}
