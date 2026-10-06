#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int int1, int2;
    float float1, float2;

    // Read integer and float inputs
    scanf("%d %d", &int1, &int2);
    scanf("%f %f", &float1, &float2);

    // Print sum and difference of integers
    printf("%d %d\n", int1 + int2, int1 - int2);

    // Print sum and difference of floats rounded to 1 decimal place
    printf("%.1f %.1f\n", float1 + float2, float1 - float2);

    
    
    return 0;
}
