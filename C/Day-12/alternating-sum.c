//https://www.codechef.com/problems/MXALT

#include <stdio.h>

int cmp(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

int main() {
	int t; 
	scanf("%d", &t);
	while(t--){
	    int n;
	    scanf("%d", &n);
	    int arr[n];
	    for (int i = 0; i<n; i++){
	        scanf("%d", &arr[i]);
	    }
	    qsort(arr, n, sizeof(int), cmp);
	    int sum = 0;
	    for (int i = 0; i<n; i++){
	        if (i<n/2) sum -= arr[i];
	        else sum += arr[i];
	    }
	    printf("%d\n", sum);
	    
	}
	return 0;
}

