/*A1:
Check whether a given number can be expressed as the sum of two prime number

i/p
Enter a positive integer: 34
Output
34 = 3 + 31

34 = 5 + 29
34 = 11 + 23
34 = 17 + 17
NoofWays = 4

NoofWays=-1

Name:B.Nikshiptha
Date:7th,Nov 2024

*/

#include <stdio.h>

int is_prime(int n)
{
    if (n <= 1)
    {
        return 0;  
    }
    
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0) 
        {
            return 0;  
        }
    }
    return 1;  
}


void find_prime_pairs(int number)
{
    int count = 0;  
    
    for (int i = 2; i <= number / 2; i++) 
    {
        if (is_prime(i) && is_prime(number - i))
        {
            printf("%d = %d + %d\n", number, i, number - i);
            count++;
        }
    }
    
    
    if (count > 0)
    {
        printf("NoofWays = %d\n", count);
    } else {
        printf("NoofWays = -1\n");
    }
}

int main() {
    int number;
    
    
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    
    
    find_prime_pairs(number);
    
    return 0;
}

