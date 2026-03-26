#include <stdio.h>
#include <string.h>
#include "prog1.h"

char* angolabc()
{
    static char ktomb[27];
    for (int i = 0; i < 26; i++)
    {
        ktomb[i] = 'a' + i;
        
    }
    ktomb[26] = '\n';
    return ktomb;
}

int main(int argc, char const *argv[])
{
    char* abc = angolabc();
    printf("%s\n", abc);
    return 0;
}
