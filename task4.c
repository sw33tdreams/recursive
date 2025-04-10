#include <stdio.h>
int l = 0;
void count(int n){
	if(l > n){
		return;
	}
	printf("%d\n",l);
	++l;
	count(n);
}

int main() {
	int n = 0;
	scanf("%d", &n);
	count(n);
	return 0;
}

