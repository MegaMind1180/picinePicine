#include <unistd.h>

void digits(void)
{
    int a = '0';
    int b;
    
    while (a <= '9')
    {           
        b = '0';
        while (b <= '9')
        {
            write(1, &a, 1);
            write(1, &b, 1);
            if (!(a == '9' && b == '9'))
            {
                write(1, ",", 1);
            }
                
            b++;
        }                         
    a++;   
    }
    
}
int main(void)
{
    digits();
}


0  1 10 11 100 101 111 1000 1100

0123456789 10 

1F