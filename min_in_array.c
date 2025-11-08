#include <stdio.h>

int main() {
    int arr[10], n, min, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    min = arr[0];
    for(i = 1; i < n; i++)
        if(arr[i] < min)
            min = arr[i];

    printf("Minimum value in array = %d\n", min);
    return 0;
}
