// C Program to implement binary search using iteration
#include <stdio.h>

int binarySearch(int arr[], int left, int right, int key) {
  
    while (left <= right) {

       
        int mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            return mid;
        }

        if (arr[mid] < key) {
            left = mid + 1;
        }

        else {
            right = mid - 1;
        }
    }

    return -1;
}


int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
  
    int key = 23;
  
    int result = binarySearch(arr, 0, size - 1, key);
    if (result == -1) {
        printf("Element is not present in array");
    }
    else {
        printf("Element is present at index %d", result);
    }
    return 0;
}