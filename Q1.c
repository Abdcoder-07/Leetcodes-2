//MOVES ALL ZEROS TO END
#include <stdio.h>
void movezeros(int arr[],int size){
    int i,index=0;
    for (i = 0; i < size; i++) {
        if (arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }
    while (index < size) {
        arr[index++] = 0;
    }
}
int main() {
    int n,i;
    printf("Enter number of elements in array\n");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        printf("Enter element no %d\n", i + 1);
        scanf("%d", &arr[i]);
    }
    movezeros(arr,n);
    for (i = 0; i < n; i++) {
        printf("%d,", arr[i]);
    }
}
