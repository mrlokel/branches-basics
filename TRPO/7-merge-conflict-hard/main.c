#include <stdio.h>

#define N_ELEMENTS(arr) (sizeof(arr) / sizeof(*(arr)))

int max_element(int* arr, int size)
{
    int max = *arr;

    int* it;
    for (it = arr + 1; it < arr + size; ++it) {
        if (*it > max) {
            max = *it;
        }
    }

    return max;
}

void print_array(int* arr, size_t size)
{
    printf("Array: ");
    size_t i;
    for (i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {3, 1, 4, 1, 5};

    const int max = max_element(arr, N_ELEMENTS(arr));

    print_array(arr, N_ELEMENTS(arr));
    printf("Max element: %d\n", max);

    return 0;
}
