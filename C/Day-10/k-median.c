#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, k;
	    scanf("%d %d", &n, &k);
	    int arr[n];
	    for (int i = 0; i<n; i++){
	        scanf("%d", &arr[i]);
	    }
	    qsort(arr, n, sizeof(int), cmp);
	    int rem = n - k;
	    for (int i = ((rem-1)/2); i < n - (rem/2); i++ ){
	        if (i == ((rem-1)/2) || arr[i] != arr[i-1]){
	            printf("%d ", arr[i]);
	        }
	    }
	    printf("\n");
	}
	return 0;
}

