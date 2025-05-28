#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NUM 600851475143

int find_largest_factor()
{
    long long sqrt_num = sqrt(NUM);
    long long num = NUM;
    int largest = 0;

    for (int i = 2; i <= sqrt_num; i ++)
    {
        while (num % i == 0)
        {
            largest = i;
            num = num / i;
        }
    }
    if (largest > 2)
        return largest;

    else
        return 2;
}

int main()
{
    int result = find_largest_factor();

    printf("largest factor: %d", result);

    return 0;
}