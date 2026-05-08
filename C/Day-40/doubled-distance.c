//https://www.codechef.com/problems/DOUBLEDDIST

#include <stdio.h>
#include <stdlib.h>

int cmp (const void *a, const void *b){
    return *(int*)a - *(int*)b;
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, pos = 1;
	    scanf("%d", &n);
	    int arr[n];
	    for (int i = 0; i<n; i++){
	        scanf("%d", &arr[i]);
	    }
	    qsort(arr, n, sizeof(int), cmp);
	    for (int i = 1; i<n-1; i++){
	        int x = arr[i+1] - arr[i];
	        int y = arr[i] - arr[i-1];
	        if (x != 2*y && y != 2*x) {
	            pos = 0;
	            break;
	        }
	    }
	    if (pos) printf("YES\n");
	    else printf("NO\n");
	}
	return 0;
}

