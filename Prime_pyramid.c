#include <stdio.h>

int main() 
{
    int number_of_rows;
    printf("Enter number of rows:");
    scanf("%d", &number_of_rows);

    int current = 2;            // candidate number being tested for primality
    int row = 1;

    while (row <= number_of_rows) 
    {
        int primes_printed = 0;
        while (primes_printed < row) 
        {
            int is_prime = 1;
            for (int divisor = 2; divisor * divisor <= current; divisor++) 
            {
                if (current % divisor == 0) 
                {
                    is_prime = 0;
                    break;
                }
            }
            if (is_prime) 
            {
                printf("%d ", current);
                primes_printed++;
            }
            current++;
        }
        printf("\n");
        row++;
    }
    return 0;
}
