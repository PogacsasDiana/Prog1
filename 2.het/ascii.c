#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 32; i < 127; i++)
    {
        printf("%d : %c\n", i,i);
    }
    
    return 0;
}
