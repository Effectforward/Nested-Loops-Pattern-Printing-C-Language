#include <stdio.h>
#include <math.h>

int main() 
{
    int N;
    printf("Enter N: ");
    scanf("%d", &N);

    for (int first = 1; first <= N; first++) 
    {
        for (int second = 1; second <= N; second++) 
        {
            int product = first * second;
            int root = (int) sqrt(product);
            if (root * root == product) 
            {
                printf("(%d, %d)\n", first, second);
            }
        }
    }

    return 0;
}
