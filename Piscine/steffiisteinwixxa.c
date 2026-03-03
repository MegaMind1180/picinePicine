#include <unistd.h>

// die Funktion soll alle Zahlen von 0 - 100 ausprinten... und alle durch 3 Teilbaren zahlen "FIZZ" schreiben und alle durch 5 teilbaren "BUZZ" schreiben 

void hs(long long i)
{
    if (i > 9)
        hs(i / 10);
    write(1, &"0123456789"[i % 10], 1);
}

void fizzbuzz(void)
{
    int x = 0;
    while (x <= 100)
    {
        if (!(x % 5 == 0 || x % 3 == 0))
        {
            hs(x);
            write(1, "\n", 1);
        }       
        if (x % 5 == 0)
        {
            write(1, "BUZZ\n", 5);
        }
         if (x % 3 == 0)
        {
            write(1, "FIZZ\n", 5);
        }       
        x++;
    }
}





int main(void)
{
    fizzbuzz();
}