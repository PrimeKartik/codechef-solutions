//https://www.codechef.com/problems/STRONGTABLE

#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
    return *(int*)b - *(int*)a;
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
	    int weight = 0, max = 0;
	    for (int i = 0; i<n; i++){
	        weight = arr[i]*(i+1);
	        if (weight > max) max = weight;
	    }
	    printf("%d\n", max);
	}
	return 0;
}

