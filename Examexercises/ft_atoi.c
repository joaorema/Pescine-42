#include <unistd.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
	{
		i++;
	}
	if(str[i] == '-')
	{
		sign = -1;
	}
	if(str[i] == '-' || str[i] == '+')
	{
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

#include <stdio.h>

int ft_atoi(const char *str);

int main(void)
{
    const char *test_str = "   -12345";
    int result = ft_atoi(test_str);
    printf("The result is: %i\n", result);
    return 0;
}
	
