#include <stdio.h>
#include <stdbool.h>

int main() {
    int arr[1001];
    int n, key;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the key element: ");
    scanf("%d", &key);

    bool found = false;
    int index;

    printf("Enter the elements in the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = true;
            index = i;
            break;
        }
    }

    if(found) {
        printf("Integer %d found at index %d", key, index);
    }
    else {
        printf("Not present in the array");
    }

    return 0;
}