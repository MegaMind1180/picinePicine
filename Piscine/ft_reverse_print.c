#include <unistd.h>

void ft_reverse(void)
{
    char a = 'z';
    
    while (a >= 'a')
    {
        write(1, &a, 1);   
        a--;     
    }
    
}


int main(void)
{
    ft_reverse();
}