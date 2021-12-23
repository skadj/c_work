#include<stdio.h>
#include<stdlib.h>


int main() {
	int* pi;

	int sum = 0;

	pi = (int*)malloc(sizeof(int) * 5);

	//int pi[5]
	if (pi == NULL) {
		printf("memory error!");
		exit(1);
	}
	for (int i = 0; i < 5; i++) {

		scanf("%d", &pi[i]);

		sum += pi[i];
	}

	printf("%d", sum / 5); 


	return 0;
}






