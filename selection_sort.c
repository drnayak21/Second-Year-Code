#include <stdio.h>

int main() {
    int arr[1001];
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the elements in the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min;

    for(int i = 0; i < n - 1; i++) {
        min = i;

        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    printf("Sorted array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}