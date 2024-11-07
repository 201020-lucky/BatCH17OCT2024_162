/*
A2:Program to find nth number made of given four digits 1, 4,6 and 9 as the only digits..

Input Format:

The First Line Of Input Contains T no of test cases
The Second Line Of Input Contains N as input taken.

Output Format:
Print the number of digits in the nth number .

Constraints:

1<=T<=100
1<=N<=100

Examples:

Input : 6
Output : 14

1,4 6, 9.11,14

Input : 21
Output : 111

Name:B.Nikshiptha
Date:7th,Nov 2024

*/
#include <stdio.h>
void genNth(int);

int main()
{
    int N;
    printf("\n Enter the N:");
    scanf("%d",&N);
    genNth(N);
    
    return 0;
}
void genNth(int number)
{
    int digits[]={1,4,6,9};
    int number1[10];
    int element=0;
    int itr;
    while(number>0)
    {
        number1[element++] = digits[(number-1)%4];
        number=(number-1)/4;
    }
    for(itr=element-1;itr>=0;itr--)
    {
        printf("%d",number1[itr]);
    }
    printf("\n");
}