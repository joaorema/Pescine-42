int	ft_atoi(const char *str)
{
	int i;
	int sign;
	int r;

	i = 0;
	r = 0;
	sign = 1;

	while((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
	{
		i++;
	}
	if(str[i] == '-')
	{
		sign = -1;
	}
	if(str[i] == '+' || str[i] == '-')
	{
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return (sign * r);
}
