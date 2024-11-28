#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;
	int r;

	i = 0;
	if(argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			r = 1;
			if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				r = r + argv[1][i] - 'a';
			}
			else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				r = r + argv[1][i] - 'A';
			}
			while(r != 0)
			{
				write(1, &argv[1][i], 1);
				r--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
