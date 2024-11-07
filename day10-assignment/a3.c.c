/*
A3. Write a program to find the  n-th number made of prime digits

Input Format:
First Line Of Input Contains T Number Of Test Cases
Second Line Of Input Contains an input Number N.

Output Format:
Print the Nth number of sequence and it should be only prime.

Constraints:
1<=T<=100
1<=N<=10000

Examples :
Input  :
1
10
Output :
 33

Name:B.Nikshiptha
Date:7th,Nov 2024

*/

#include <stdio.h>
int genPrime(int);

int main()
{
    int T,N,i;
    
    printf("\nNumber of test cases: ");
    scanf("%d", &T);
    
    for(i=0;i<T;i++)
    {
        printf("\nEnter the value of N: ");
        scanf("%d", &N);
        printf("\n%d\n",genPrime(N));
    }
    return 0;
}
int genPrime(int n)
{
    int res=0;
    int value = 1;
    
    while(n>0)
    {
        int digit = (n - 1)% 4;
        if (digit == 0)
        {
            res += 2 * value;
        }
        else if (digit == 1)
        {
            res += 3 * value;
        }
        else if (digit == 2)
        {
            res += 5 * value;
        }
        else
        {
            res += 7 * value;
        }
         value = value*10;
         n = (n-1)/4;
    }
    return res;
}