#include <stdio.h>
int main()
{
    // printf("%d" , printf("%s" , "Hello World!"));

    printf("%10s" , "HEllo");

    char c = 255;
    c = c+10;
    printf("%d" , c);

    unsigned i = 1;
    int j = -4;
    printf("%u" , i+j);

    int var = 34;
    {
        int var = 4;
        printf("%d\n" , var); //1
    }
    printf("%d" , var); //2 

    return 0;
}

#include <stdio.h>
int main()
{
    int var = 056;
    printf("%d\n" , var);//46
    printf("%o" , var);//56

    return 0;
}

