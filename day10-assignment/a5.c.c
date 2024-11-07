/*A5.
Write a c program to print alphabet triangle.
Input: 5
Output:

     A
    ABA
   ABCBA
  ABCDCBA
 ABCDEDCBA



     1
    121
   12321
  1234321
 123454321

Name:B.Nikshiptha
Date:7th,Nov 2024

*/

#include <stdio.h>

void print_alphabet_triangle;
int n;
{
    for (int i = 1; i <= n; i++)
    {
        
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        
        
        for (char ch = 'A'; ch < 'A' + i; ch++) 
        {
            printf("%c", ch);
        }
        
        
        for (char ch = 'A' + i - 2; ch >= 'A'; ch--) 
        {
            printf("%c", ch);
        }
        
        printf("\n");
    }
}

void print_number_triangle(int n) 
{
    for (int i = 1; i <= n; i++)
    {
        
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        
        
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        
        
        for (int j = i - 1; j >= 1; j--)
        {
            printf("%d", j);
        }
        
        printf("\n");
    }
}

int main() 
{
    int n;
    
    
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    
    printf("\nAlphabet Triangle:\n");
    print_alphabet_triangle(n);
    
    
    printf("\nNumber Triangle:\n");
    print_number_triangle(n);
    
    return 0;
}
