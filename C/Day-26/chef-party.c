//https://www.codechef.com/problems/CHFPARTY

#include <stdio.h>
int cmp (const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, ans = 0;
	    scanf("%d", &n);
	    int arr[n];
	    for (int i = 0; i<n; i++){
	        scanf("%d", &arr[i]);
	    }
	    qsort(arr, n, sizeof(int), cmp);
	    for (int i = 0; i<n; i++){
	        if (arr[i] < i+1){
	            ans++;
	        }
	        else break;
	    }
	    printf("%d\n", ans);
	}
	return 0;
}

