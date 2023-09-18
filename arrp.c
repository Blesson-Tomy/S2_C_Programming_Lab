#include <stdio.h>
#include <string.h>

int main() {
    int arr[10], n, sum = 0, avg;
    int i;

    printf("No of integers:");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int *arrp[10];
    arrp[0] = &arr[0]; // Correctly assign the address of the first element

    for (i = 0; i < n; i++) {
        printf("%d ", *arrp[i]); // Access the elements using pointers
    }

    return 0;
}
