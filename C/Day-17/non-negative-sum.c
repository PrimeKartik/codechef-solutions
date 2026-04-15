// https://www.codechef.com/START234D/problems/NONNEGSUM

#include <stdio.h>

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
	    int sum = 0, ans = 0;
	    for (int i = 0; i<n; i++){
	        sum += arr[i];
	        ans ++;
	        if (sum < 0) {
	            sum -= arr[i];
	            ans--;
	        }
	    }
	    printf("%d\n", ans);
	}
	return 0;
}

