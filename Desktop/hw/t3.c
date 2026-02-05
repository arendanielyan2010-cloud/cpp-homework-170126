#include <stdio.h>
#include <stdlib.h>

int main(){
	int size;
	int tmp = 0;
	printf("Enter the array size: ");
	scanf("%d", &size);

	int*arr=malloc(size * sizeof(int));
	if (arr == NULL){
		printf("Failed");
		exit(EXIT_FAILURE);
	}
	
	for (int i = 0; i < size; ++i){
		printf("ENter the %d index value: ", i);
		scanf("%d", &arr[i]);
	}

	int*zuyg = malloc(size * sizeof(int));
	int j = 0;
	for (int i = 0; i < size; ++i){
		if (arr[i] % 2 == 0){
			zuyg[j++] = arr[i];
		}
	}

	for(int i = 0; i < j; ++i){
		printf("%d\n", zuyg[i]);
	}
	printf("\n");

	free(arr);
	free(zuyg);
}
