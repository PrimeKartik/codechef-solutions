//https://www.codechef.com/START238D/problems/WECREC

#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
    return *(int*)b - *(int*)a;
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, k, x;
	    scanf("%d %d %d", &n, &x, &k);
	    int arr[n];
	    for (int i = 0; i<n; i++){
	        scanf("%d", &arr[i]);
	    }
	    qsort(arr, n, sizeof(int), cmp);
	    int ans=0 ,c = 1;
	    for (int i = 0; i<n; i++){
	        if (c<=k) ans++;
	        if (i < n-1 && arr[i] != arr[i+1] ) c++;
	        
	    }
	    printf("%d\n", (ans<x)?ans:x);
	}
	return 0;
}

