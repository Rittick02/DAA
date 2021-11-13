/*
Week 1:
Note: Input, output format for problem I, II and III is same and is given at the end of this exercise.
I. Given an array of nonnegative integers, design a linear algorithm and implement it using a
program to find whether given key element is present in the array or not. Also, find total number
of comparisons for each input case. (Time Complexity = O(n), where n is the size of input)
*/
#include <stdio.h>

int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

// Driver code
int main(void)
{
    int arr[] = { 1, 3, 7, 15, 33, 40, 53};
    int x ;
    printf("Enter element : ");
    scanf("%d",&x);
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function call
    int result = search(arr, n, x);
    (result == -1)
        ? printf("Element is not present in array")
        : printf("Element is present at index %d", result+1);
    return 0;
}
