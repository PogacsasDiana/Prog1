#include <stdio.h>
#include <string.h>

int char_count(char s [], char c)
{
    int szam = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == c)
        {
            szam = szam + 1;
        }
    }
    return printf("%d\n", szam);
    
}

int main(int argc, char const *argv[])
{
    char_count("Abba", 'a');
    return 0;
}
