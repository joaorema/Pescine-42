#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;
	int j;

	i = 0;
	if(argc == 2)
	{
		while((argv[1][i] >= 9 && argv[1][i] <= 13) || (argv[1][i] == 32))
		{
			i++;			
		}
		while((argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\n')
				&& (argv[1][i] != '\v' && argv[1][i] != '\f' && argv[1][i] != '\r' && argv[1][i] != '\0'))
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
			

