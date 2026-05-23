//https://www.codechef.com/problems/BUDGET25

#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
    return *(int*)b - *(int*)a;
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, x;
	    scanf("%d %d", &n , &x);
	    int arr[n];
	    long long extra = 0;
	    for (int i = 0; i<n; i++){
	        scanf("%d", &arr[i]);
	        if (arr[i] > x){
	        extra += arr[i] - x;
	        arr[i] = x;
	        }
	    }
	    qsort(arr, n, sizeof(int), cmp);
	    int c = 0;
	    for (int i = 0; i<n; i++){
	        if (arr[i] == x) c++;
	        else {
	            int diff = x - arr[i];
	            if (extra >= diff) c++;
	            extra -= diff;
	        }
	    }
	    printf("%d\n", c);
	}
	return 0;
}

