#include <stdio.h>
#include <limits.h>

int main() {
    int arr[10], n, i;
    int min1 = INT_MAX, min2 = INT_MAX;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if(arr[i] < min2 && arr[i] != min1) {
            min2 = arr[i];
        }
    }

    if(min2 == INT_MAX)
        printf("No second minimum value found (all elements may be same)\n");
    else
        printf("Second minimum value = %d\n", min2);

    return 0;
}
