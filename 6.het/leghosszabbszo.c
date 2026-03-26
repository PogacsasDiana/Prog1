#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char a[100] = {};
    printf("Adj meg szavakat '*' végjelig!\n");
    
    while (1)
    {
        printf("szó : ");
        fgets(a, 100, stdin);
        if (!strcmp(a, "*"))
        {
            break;
        }
        
        
    }
    
    

    return 0;
}
