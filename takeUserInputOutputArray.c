#include <stdio.h>

int main() {
	int arr[5];
	printf("Enter 5 integers:\n"); // Take User input  
	for(int i = 0; i < 5; i++) { 
		printf("Element %d: ", i);
		scanf("%d", &arr[i]); 

	}
	printf("\nYou entered:\n"); // print the User input 
	for(int i = 0; i < 5; i++) { 
		printf("%d ", arr[i]);
	}

	return 0;
}
