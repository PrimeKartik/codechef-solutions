// https://www.codechef.com/problems/PERMUTATION

#include <stdio.h>

int cmp(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, x;
	    scanf("%d", &n);
	    int arr[n], pos = 1, sum = 0;
	    for (int i = 0; i<n; i++){
	        scanf("%d", &arr[i]);
	    }
	    qsort(arr, n, sizeof(int), cmp);
	    for (int i = 0; i<n; i++){
	        if (arr[i] > i+1) {
	            pos = 0;
	            break;
	        }
	        sum += (i+1) - arr[i];
	    }
	    if (!pos) printf("-1\n");
	    else printf("%d\n", sum);
	}
	return 0;
}

