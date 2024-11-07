/*A4:rotate array every kth element

1 2 3 4 5 6 7 8 9

k= 3

3 2 1 6 5 4 9 8 7

Name:B.Nikshiptha
Date:7th,Nov 2024
*/

#include <stdio.h>

void reverse(int arr[], int start, int end) 
{
    for (int i = start, j = end; i < j; i++, j--) 
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}


void rotate_array(int arr[], int n, int k)
{
    
    for (int i = 0; i < n; i += k)
    {
        
        int end = (i + k - 1 < n) ? (i + k - 1) : (n - 1);
        
        reverse(arr, i, end);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;

    
    printf("Enter value of k: ");
    scanf("%d", &k);

  
    rotate_array(arr, n, k);

    
    printf("Array after rotation:\n");
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    printf("\n");

    return 0;
} 
