#include<stdio.h>
int main(){
	int arr[100];
	int n;
		printf("Enter Size of array :\n");
			scanf("%d", &n);
		printf("Enter Elements of the array :\n");
			for(int i = 0; i < n; i++){
				scanf("%d", &arr[i]);
	}
	int sum = 0;
	printf("Sum of all even elements in the array are :\n");
	for(int i = 0; i  = arr[i]; i++){
		if(arr[i]%2 == 0){
			sum = sum + arr[i];
		}
	}
	printf("%d\n", sum);	
return 0;
}