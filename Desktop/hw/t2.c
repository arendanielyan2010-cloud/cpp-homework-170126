#include <stdio.h>
#include <stdlib.h>

int main(){
	int size = 5;
	int newsize = 10;
	int*arr=malloc(size*sizeof(int));

	if (arr != NULL){
		for (int i = 0; i < size; ++i){
			printf("ENter the %d index value: ", i);
			scanf("%d", &arr[i]);
		}
	}
	
	else{
		printf("Permission denied!");
		exit(EXIT_FAILURE);
	}

	arr = realloc(arr, newsize*sizeof(int));
	if (arr == NULL){
		printf("Failed");
		free(arr);
		exit(EXIT_FAILURE);
	}

	for (int i = size; i < newsize; ++i){
		printf("ENter the %d index value: ", i);
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < newsize; ++i){
		printf("%d index value: %d\n", i, arr[i]);
	}
	
	free(arr);
	arr = NULL;
}
