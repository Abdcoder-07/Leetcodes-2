//REMOVES DUPLICATES FROM ARRAY AND PRINTS UNIQUE ELEMENTS ONLY
#include <stdio.h>
int removedup(int num[], int Size) {
    int k = 1;
    for (int i = 1; i < Size; i++) {
        if (num[i] != num[i - 1]) {
            num[k] = num[i];
            k++;
        }
    }
    return k;
}

int main() {
    int n, i;
    printf("Enter number of elements in array\n");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        printf("Enter element no %d\n", i + 1);
        scanf("%d", &arr[i]);
    }
    int k = removedup(arr, n);

    printf("Total no of uniqu elements = %d\n", k);
    printf("Array after removing duplicates: ");
    for (i = 0;i < k;i++) {
        printf("%d ", arr[i]);
    }
}
