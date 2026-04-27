//https://www.codechef.com/problems/DPF

#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, k, d;
	    scanf("%d %d %d", &n, &k, &d);
	    int arr[n];
	    for (int i = 0; i<n; i++){
	        scanf("%d", &arr[i]);
	    }
	    int cap = n-k;
	    if (cap == 0){
	        printf("0\n");
	        continue;
	    }
	    int ans = 0;
	    qsort(arr, n, sizeof(int), cmp);
	    for (int i = 0; i<cap; i++){
	        ans += 1 + (d-1)/arr[i];
	    }
	    printf("%d\n", ans);
	}
	return 0;
}

