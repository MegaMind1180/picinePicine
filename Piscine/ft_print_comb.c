#include <unistd.h>

void ft_print_comb(void)
{
    char a = '0';
    char b;
    char c;
    while (a <= '7')
    {
        b = a + 1;
        while (b <= '8')
        {
            c = b + 1;
            while (c <= '9')
            {
                write(1, &a, 1);
                write(1, &b, 1);
                write(1, &c, 1);
                c++;
                if (!(a == '7' && b == '8' && c == '9'))
                {
                    write(1, ",", 2);
                }               
            }
        b++;
        }
    a++;    
    }
    
}

int main(void)
{
    ft_print_comb();
}