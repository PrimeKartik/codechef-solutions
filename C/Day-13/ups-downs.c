//https://www.codechef.com/problems/ANUUND

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
	    int i = 0, j = n-1, idx = 0;
	    while(idx < n){
	        if (idx%2 == 0){
	            printf("%d ", arr[i]);
	            i++;
	        }else {
	            printf("%d ", arr[j]);
	            j--;
	        }
	        idx++ ;
	    }
	    printf("\n");
	}
	return 0;
}

