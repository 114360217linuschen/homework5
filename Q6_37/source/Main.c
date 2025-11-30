#include <stdio.h>

int recursiveMaximum(int a[], int size)
{
    if (size == 1)
        return a[0];

    int max = recursiveMaximum(a, size - 1);

    return (a[size - 1] > max) ? a[size - 1] : max;
}

int main()
{
    int arr[] = { 5, 9, 2, 11, 7 };
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Maximum = %d\n", recursiveMaximum(arr, size));

    return 0;
}
