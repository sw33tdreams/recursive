#include <stdio.h>
void func(int n){
	if(n == 0){
		printf("0\n");
	return;
	}
		printf("%d\n",n);
	func(n - 1);
	
}
int main() {
	int n = 0;
	scanf("%d", &n);
	func(n);
	return 0;
}
