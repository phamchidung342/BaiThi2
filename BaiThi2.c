#include <stdio.h>
void main(){
	printf("Input 10 number: ");
	printf("\n===================");
	
	int arr [10];
	int i;
	for (i = 0; i < 10; i++){
	printf("\n+ Number %d: ", i + 1);
	scanf("%d", &arr[i]);
}
for (i = 9; i >= 0; i--){
	printf("\nResult: %d", arr[i]);
}
}
