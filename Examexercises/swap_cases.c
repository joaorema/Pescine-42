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
	//str[i] = '\0';
	return(str);
}

#include <stdio.h>

int main(void)
{
    char str[5] = {'H', 'e', 'l', 'l', 'o'}; // No null terminator
    printf("Swapped: %s\n", swap_cases(str));
    return 0;
}
