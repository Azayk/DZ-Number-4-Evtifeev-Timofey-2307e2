#include <stdio.h>

void moveZerosToEnd(int arr[], int size) 
{
    // Проходим по массиву и переместите ненулевые элементы в начало
    int count = 0; 
        for (int i = 0; i < size; i++) 
        {
            if (arr[i] != 0) 
            {
                arr[count++] = arr[i];
            }
        }
    
    // Заполните оставшиеся позиции нулями
    while (count < size) 
    {
        arr[count++] = 0;
    }
}

int main()
{
    int arr[] = { 1, 0, 8, 0, 3, 0, 5, 0, 12, 0 };
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Before: ");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }

    moveZerosToEnd(arr, size);

    printf("\nAfter: ");
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}