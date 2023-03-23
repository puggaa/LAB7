/*
Andrew Ang

Lab Assignment 7

COP 3502C

*/

#include <stdio.h>

int main() {
    
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int i, x, temp, count;

    printf("Array: ");
    
    for (i = 0; i < n; i++) {
        
        printf("%d ", arr[i]);
        
    }
    
    printf("\n");

    for (i = 0; i < n - 1; i++) {
        
        count = 0;
        
        for (x = 0; x < n - i - 1; x++) {
            
            if (arr[x] > arr[x + 1]) {
                
                temp = arr[x];
                
                arr[x] = arr[x + 1];
                
                arr[x + 1] = temp;
                
                count++;
            }
            
        }
        
        printf("Swaps needed for index %d: %d\n", i, count);
    }

    printf("Sorted Array: ");
    
    for (i = 0; i < n; i++) {
        
        printf("%d ", arr[i]);
        
    }
    
    printf("\n");

    return 0;
}
