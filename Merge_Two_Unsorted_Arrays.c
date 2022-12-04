#include <stdio.h>
#include <conio.h>
int main()
{
    int arr1[10], arr2[10], arr3[20];
    int i, n1, n2, m, index = 0;
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    printf("Enter the elements of the first array:\n");
    for (i = 0; i < n1; i++)
    {
        printf("arr1[%d] = ", i);
        scanf("%d", &arr1[i]);
    }
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    printf("Enter the elements of the second array:\n");
    for (i = 0; i < n2; i++)
    {
        printf("arr2[%d] = ", i);
        scanf("%d", &arr2[i]);
    }
    m = n1 + n2;
    for (i = 0; i < n1; i++)
    {
        arr3[index++] = arr1[i];
    }
    for (i = 0; i < n2; i++)
    {
        arr3[index++] = arr2[i];
    }
    printf("The merged array is:\n");
    for (i = 0; i < m; i++)
        printf("arr[%d] = %d\n", i, arr3[i]);
    return 0;
}