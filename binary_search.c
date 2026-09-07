#include <stdio.h>

int main() {
    int arr[1001];
    int low, mid, high;
    int n, key;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the values in the sorted array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of key: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    int found = 0;

    while(low <= high) {
        mid = (low + high) / 2;

        if(key == arr[mid]) {
            printf("Found the element %d at index %d", key, mid);
            found = 1;
            break;
        }
        else if(key > arr[mid]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if(!found) {
        printf("Didn't find %d in this array", key);
    }

    return 0;
}