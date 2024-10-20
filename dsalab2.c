#include <stdio.h>

int main() {
    int arr1[100], arr2[100];
    int n, m;

    printf("\nEnter size of array 1:\n");
    scanf("%d", &n);
    printf("\nEnter size of array 2:\n");
    scanf("%d", &m);

    printf("\nEnter elements of array 1:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("\nEnter elements of array 2:\n");
    for (int j = 0; j < m; j++) {
        scanf("%d", &arr2[j]);
    }

    int k = 0;
    int result[200];
    for (int i = 0; i < n; i++) {
        result[k++] = arr1[i];
    }
    for (int j = 0; j < m; j++) {
        int found = 0;
        for (int i = 0; i < n; i++) {
            if (arr2[j] == arr1[i]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            result[k++] = arr2[j];
        }
    }

    printf("\nUnion of both arrays is:\n");
    for (int i = 0; i < k; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
