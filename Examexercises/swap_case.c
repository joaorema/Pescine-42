char *swap_cases(char *str)
{
	int i;
	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		else if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i]  = str[i] + 32;
		}
		i++;
	}
}

#include <stdio.h>

int main(void)
{
	char str[] = "HeLLo , ThIs IS 42 + 45 . í Test";
	swap_cases(str);
	printf("%s\n", str);
	return 0;
}
