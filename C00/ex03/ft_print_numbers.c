#include <stdio.h>
#include <unistd.h>

void	ft_print_numbers(void);
char	 g_c = 48 ;

 int main(void)
{	
	while(1)
	{
		if (g_c == 58)
		{
			printf("\n");
			return 0;
		}
		ft_print_numbers();
		c++;
	}
}
 void ft_print_numbers(void)
{
	write(1, &g_c, 1);
}
