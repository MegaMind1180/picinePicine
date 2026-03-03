#include <unistd.h>

void ft_putchar(void)
{
    write(1, "1234567890", 5);
}
int main(void)
{
    ft_putchar();
}
