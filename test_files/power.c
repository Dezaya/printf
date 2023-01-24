long long int power(int base, int x)
/**
 * Return: Result
 */

{
	int result = 1;

	for (x; x > 0; x--)
	{
		result = result * base;
	}

	return (result);
}
