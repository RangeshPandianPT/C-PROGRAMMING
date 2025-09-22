#include <stdio.h>

float getAvg(int arr[], int n) {
    
    if (n == 1) {
        return arr[0];
    }
  

    return (arr[n - 1] + (n - 1) *
            getAvg(arr, n - 1)) / n; 
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);


    float res = getAvg(arr, n);

    printf("%.2f", res);

    return 0;
}