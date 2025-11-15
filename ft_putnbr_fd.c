#include "libft.h"
#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
    write (fd, &c, 1);
}

void ft_putnbr_fd(int n, int fd)
{
    long nb = n;

    if(nb < 0)
    {
        ft_putchar_fd('-', fd);
        nb = -nb;
    }
    if (nb >= 10)
    {
        ft_putnbr_fd(nb / 10, fd);
        ft_putnbr_fd(nb % 10, fd);
    }
    else
    {
        ft_putchar_fd(nb + '0', fd);
    }
}

int main(void)
{
    ft_putnbr_fd(2, 1);
    return(0);
}