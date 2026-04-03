#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, c = 1,d =1;
	    scanf("%d", &n);
	    int arr[2*n];
	    for (int i = 0; i<2*n; i++){
	        scanf("%d", &arr[i]);
	    }
	    qsort(arr, 2*n, sizeof(int), cmp);
	    for (int i = 1; i<2*n; i++){
	        if (arr[i-1] == arr[i]){
	            c++;
	        }
	        if (c > 2){
	            d = 0;
	            break;
	        }
	        if (arr[i-1] != arr[i]) c = 1;
	    }
	    if (d) printf("YES\n");
	    else printf("NO\n");
	    
	    
	}
	return 0;
}

