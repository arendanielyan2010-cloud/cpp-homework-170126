#include <stdio.h>

void function(int*num){
	*num = *num+10;
}

int main(){
	int x = 5;
	function(&x);
	printf("%d\n", x);
}
