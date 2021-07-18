#include <stdio.h>
#include <unistd.h>

void ft_print_reverse_alphabet(void);
char c = 122 ;

int main()
{	
	while(1)
	{
		if (c == 96)
		{
			printf("\n");
			return 0;
		}
		ft_print_reverse_alphabet();
		c--;
	}

}

void ft_print_reverse_alphabet(void)
{
	write(1, &c, 1);
}