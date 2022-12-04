#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n, pos, arr[10];
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the position from which the number has to be deleted: ");
    scanf("%d", &pos);
    for (i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;
    printf("The array after deletion is:\n");
    for (i = 0; i < n; i++)
        printf("arr[%d] = %d\n", i, arr[i]);
    return 0;
}