#include "prog1.h"
#include <stdio.h>
#include <string.h>

int match_ends(int n, string words[])
{
    int szamol = 0;
    for (int i = 0; i < n; i++)
    {
        if (words[i][0] == words[i][strlen(words[i])-1] && strlen(words[i]) >= 2)
        {
            szamol += 1;
        }
        
    }
    return printf("%d\n", szamol);
    
}

int main()
{
    string szavak1[] = { "aba", "xyz", "aa", "x", "bbb" };
    int szavak1_meret = 5;

    match_ends(szavak1_meret, szavak1);

    for (int i = 0; i < szavak1_meret; ++i)
    {
        puts(szavak1[i]);
    }

    return 0;
}