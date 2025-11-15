//MOVES ALL ZEROS TO END
#include <stdio.h>
int main() {
    int n, i,index=0;
    printf("Enter number of elements in array\n");
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        printf("Enter element no %d\n", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }
    while (index < n) {
        arr[index++] = 0;
    }
    for (i = 0; i < n; i++) {
        printf("%d,", arr[i]);
    }
}
