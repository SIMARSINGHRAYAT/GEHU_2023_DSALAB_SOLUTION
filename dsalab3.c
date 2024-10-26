  #include <stdio.h>

int main() {
    int arr1[100], arr2[100], result[100];
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
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr1[i] == arr2[j]) {
                int isDuplicate = 0;
                for (int p = 0; p < k; p++) {
                    if (result[p] == arr1[i]) {
                        isDuplicate = 1;
                        break;
                    }
                }
                if (!isDuplicate) {
                    result[k] = arr1[i];
                    k++;
                }
                break;
            }
        }
    }

    printf("\nIntersection of arrays:\n");
    if (k == 0) {
        printf("No common elements found!\n");
    } else {
        for (int i = 0; i < k; i++) {
            printf("%d ", result[i]);
        }
        printf("\n");
    }

    return 0;
}