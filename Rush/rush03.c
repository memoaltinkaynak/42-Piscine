void	ft_putchar(char a);

void	rush(int x, int y)
{
	int	su;
	int	sa;

	sa = 1;
	while (sa <= y && x > 0)
	{
		su = 1;
		while (su <= x)
		{
			if ((su == 1 && sa == 1) || (su == 1 && sa == y))
				ft_putchar('A');
			else if ((su == x && sa == 1) || (su == x && sa == y))
				ft_putchar('C');
			else if ((su == 1) || (su == x) || (sa == 1) || (sa == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			su++;
		}
		ft_putchar('\n');
		sa++;
	}
}

