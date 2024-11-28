#include <unistd.h>

void	ft_putnbr(int nb)
{
	char str[10] = "0123456789";
	if (nb > 9)
		ft_putnbr(nb / 10);
	write(1, &str[nb % 10], 1);
}

int main()
{
	int i;
	i = 1;
	while(i <= 100)
	{
		if(i % 3 == 0 && i % 5 == 0)
		{
			write(1, "fizzbuzz", 8);
		}
		else if(i % 3 == 0)
		{
			write(1, "fizz", 4);
		}
	       	else if(i % 5 == 0)
		{
			write(1, "buzz", 4);
		}
		else
		{
			ft_putnbr(i);
		}
		write(1, "\n", 1);
		i++;
	}
}	
