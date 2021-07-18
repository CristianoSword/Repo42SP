#include <stdio.h>
#include <unistd.h>

void ft_print_alphabet(void);
char c = 97 ;

int main()
{	
	while(1)
	{
		if (c == 123)
		{
			printf("\n");
			return 0;
		}
		ft_print_alphabet();
		c++;
	}

}

void ft_print_alphabet(void)
{
	write(1, &c, 1);
}