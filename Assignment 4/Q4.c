#include <stdio.h>

int main(){
    int arr1[100], arr2[100], n, i, j;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++) 
    scanf("%d", &arr1[i]);
    for (i = 0; i < n; i++) {
        int count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr1[i] == arr1[j]) {
                count++;
                arr2[j] = -1;}}
                    
        if (arr2[i] != -1)
            printf("%d appears %d times\n", arr1[i], count);
            }
    return 0;
}