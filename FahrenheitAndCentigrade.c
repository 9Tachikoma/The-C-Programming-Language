#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20


main()

{
    float fahr,celsius;
    int lower, upper, step;


    fahr = lower;
    for(fahr = 0; fahr <= 300;fahr = fahr +20)
        printf("%3.0f %6.1f\n",fahr,(5.0/9.0)*(fahr - 32));
}
