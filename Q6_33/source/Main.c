#include <stdio.h>
#define SIZE 15

int binarySearch(int a[], int low, int high, int key);
void printHeader(void);
void printRow(int a[], int low, int mid, int high);

int main(void)
{
    int a[SIZE];
    int i;
    int key;
    int result;

    for (i = 0; i < SIZE; i++)
        a[i] = 2 * i;   // 跟 6.19 完全一樣

    printf("Enter a number to search: ");
    scanf("%d", &key);

    printHeader();
    result = binarySearch(a, 0, SIZE - 1, key);

    if (result == -1)
        printf("%d was not found\n", key);
    else
        printf("%d found in array element %d\n", key, result);

    return 0;
}

int binarySearch(int a[], int low, int high, int key)
{
    int mid = (low + high) / 2;

    printRow(a, low, mid, high);

    if (low > high)
        return -1;

    if (a[mid] == key)
        return mid;
    else if (key < a[mid])
        return binarySearch(a, low, mid - 1, key);
    else
        return binarySearch(a, mid + 1, high, key);
}

void printHeader(void)
{
    int i;

    printf("\nIndices:\n");

    for (i = 0; i < SIZE; i++)
        printf("%3d", i);

    printf("\n");

    for (i = 1; i <= 4 * SIZE; i++)
        printf("-");
    printf("\n");
}

void printRow(int a[], int low, int mid, int high)
{
    int i;

    for (i = 0; i < SIZE; i++)
    {
        if (i < low || i > high)
            printf("   ");
        else if (i == mid)
            printf("%3d*", a[i]);
        else
            printf("%3d ", a[i]);
    }
    printf("\n");
}
