#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = '2' - '(';  //10
    int b = (a * 'd') + (a * 'd'); //2000
    int c = 'B' - '('; //26

    printf("%d\n", b+c);

    return 0;
}
