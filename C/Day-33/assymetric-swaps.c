//https://www.codechef.com/problems/ARRSWAP

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int cmp(const void *a, const void*b){
    return *(int*)a - *(int*)b;
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n;
	    scanf("%d", &n);
	    int arr[2*n];
	    for (int i = 0; i<2*n; i++){
	        scanf("%d", &arr[i]);
	    }
	    qsort(arr, 2*n, sizeof(int), cmp);
	    int min = INT_MAX;
	    for (int i = 0; i<=n; i++){
	        int diff = arr[n+i-1] - arr[i];
	        if (diff < min) min = diff;
	    }
	    printf("%d\n", min);
	}
	return 0;
}

