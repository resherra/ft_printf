#include "ft_printf.h"

// int x(int i, ...)
// {
//     va_list ptr;
//     int n = 0;
//     int res = 0;

//     va_start(ptr, i);
//     while (n < i)
//     {
//         res += va_arg(ptr, int);
//         n++;
//     }

//     return (res);
// }

int main(void)
{
    // %d && %i
    // printf(" |%d| \n", ft_putnbr(-1337));
    // %u
    // printf(" |%d| \n", ft_put_unsigned_nbr(-1));
    // %x && %X
    // printf(" |%d| \n", ft_put_hexa_base(42, 'x'));
    // %s
    // printf(" |%d| \n", ft_putstr(NULL));
    // %c
    // printf(" |%d| \n", ft_putchar(65));
    // %p
    // char *str = "hell";
    // printf(" |%d| \n", ft_put_add((unsigned long)str));
    // printf("orig\n");
    // printf("%d\n", printf("%x\n", 0));
    // printf("mimic\n");
    // printf("%d\n", ft_printf("%p\n", 0));
    // ft_printf("%");
    printf("%d\n", ft_printf("%d %s %", 13, "hello"));
    printf("%d\n", printf("%d %s %", 13, "hello"));
}