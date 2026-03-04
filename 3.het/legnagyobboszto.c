#include <stdio.h>

int lno(int n)
{
    for (int i = n-1; i >= 1; i--)
    {
        if (n % i == 0)
        {
            printf("%d\n", i);
            return 0;
        }
        
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    for (int j = 1; j <= 50; j++)
    {
        printf("%d: ", j);
        lno(j);
    }
    
    
    return 0;
}
