#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;
	int lup;
	int ldown;

	i = 0;
	if(argc == 2)
	{
		while(argv[1][i] != '\0')
		{
		lup = argv[1][i] - 32;
		ldown = argv[1][i] + 32;
			if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				write(1, &lup, 1);
			}
			else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				write(1, &ldown, 1);
			}
			else
			{
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
