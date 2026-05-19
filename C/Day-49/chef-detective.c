//https://www.codechef.com/problems/CHEFDETE

#include <stdio.h>

int main() {
	int n, x;
	scanf("%d", &n);
	int hash[n+1];
	for (int i = 0; i<n+1; i++) hash[i] = 0;
	for (int i =0; i<n; i++){
	    scanf("%d", &x);
	    hash[x]++;
	}
	for (int i = 0; i<n+1; i++){
	    if (hash[i] == 0)
	    printf("%d ", i);
	}
	return 0;
}

