#include <stdio.h>
#include <stdlib.h>

int main(){
	int size;
	int sum = 0;
	
	printf("Enter the size of your array: ");
	scanf("%d", &size);

	int*arr = malloc(size*sizeof(int));
	if (arr == NULL){
		printf("Premision denied!");
		return 1;
	}

	for (int i = 0; i < size; ++i){
		printf("Enter the %d index value: ", i);
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	printf("The sum of array: %d", sum);
	free(arr);
	arr = NULL;
}
