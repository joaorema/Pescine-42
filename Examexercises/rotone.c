#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;
	int lup;
	int zup;


	i = 0;

	if (argc == 2)
	{
		while(argv[1][i])
		{
			lup = argv[1][i] + 1;
			zup = argv[1][i] - 25;
			if(argv[1][i] >= 'a' && argv[1][i] <= 'y' || argv[1][i] >= 'A' && argv[1][i] <= 'Y')
			{
				write(1, &lup, 1);
			}
			else if(argv[1][i] == 'z' || argv[1][i] == 'Z')
			{
				write(1, &zup, 1);
			}
			else
			{
				write(1, &argv[1][i], 1);
			}
			i++;
		}
		
		
	}
	write(1, "\n", 1);
} 
