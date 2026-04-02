#include <unistd.h>
int putnbr(int i)
{
	long nb = i;
	char c;
	
	if (nb >= 10)
		putnbr(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
}

void fizzbuzz(void)
{
	int i = 1;
	
	write(1, "0\n", 2);
	while (i <= 100000000)
	{   
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "FIZZBUZZ\n", 9);
		else if (i % 3 == 0)
			write(1, "FIZZ\n", 5);
		else if (i % 5 == 0)
			write(1, "BUZZ\n", 5);
		else
		{
			putnbr(i);
			write(1, "\n", 1);
		}
		i++;
	}
}

int main(void)
{
	fizzbuzz();
}
