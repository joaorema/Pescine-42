#include <unistd.h>

char *ft_strcpy(char *s1, char *s2)
{
	int i;
	i = 0;
	
	while(s2[i] != '\0')
	{
		s1[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
