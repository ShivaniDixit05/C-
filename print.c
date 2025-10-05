#include <stdio.h>
int main()
{
    int two = 0  , three = 2 , six = 6;
    int result = (two + three) * six / three;

    printf("Arithmetic Expression : (%d + %d) * %d / %d \n" , two , three , six , three);
    printf("Result = %d" , result);

    return 0;
}
