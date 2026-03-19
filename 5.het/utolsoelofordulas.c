#include <stdio.h>
#include <string.h>

int rfind_char(char s [], char c)
{
    for (int i = strlen(s); i >= 0; i--)
    {
        if (s[i] == c)
        {
            return printf("%d\n", i);
        }
    }
    return printf("-1\n");
}

int main(int argc, char const *argv[])
{
    rfind_char("Abba", 'b');
    return 0;
}
