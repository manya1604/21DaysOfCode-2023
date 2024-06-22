#include <stdio.h>

int countPairs(int arr[], int n, int k) {
    int count = 0;

    // Iterate through each pair (i, j) where i < j
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // Check if the sum of arr[i] and arr[j] is divisible by k
            if ((arr[i] + arr[j]) % k == 0) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int arr[] = {1, 3, 2, 6, 1, 2};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = countPairs(arr, n, k);
    printf("%d\n", result);  // Output: 5

    return 0;
}
