#include <stdio.h>

int main() {
    int arr[10], n, i, temp, rot;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number of rotations: ");
    scanf("%d", &rot);

    for(int r = 0; r < rot; r++) {
        temp = arr[0];
        for(i = 0; i < n-1; i++)
            arr[i] = arr[i+1];
        arr[n-1] = temp;
    }

    printf("Array after rotation:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
