#include <stdio.h>
int art(int n){
        if(n < 9){
	       return n;
	}
	return art(n % 10) * art(n / 10);
}

int main() {
	int n = 0;
	scanf("%d", &n);
	printf("%d\n", art(n));
	return 0; 
}
