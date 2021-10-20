#include <stdio.h>
#include <stdlib.h>


//scitani 0.01 stokrat
//calculated with something like 0.01 but it will never be exactly because of the binary system

int main()
{
    float result = 0;
    for (int iteration=1; iteration <= 100; iteration++) //iteration = i
        result+= 0.01;
    printf("%f", result);

    return 0;
}
