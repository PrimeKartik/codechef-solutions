// https://www.codechef.com/problems/MAKEPERM

#include <stdio.h>

int cmp(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, pos = 1;
	    scanf("%d", &n);
	    int a[n];
	    for (int i = 0; i<n; i++){
	        scanf("%d", &a[i]);
	    }
	    qsort(a, n, sizeof(int), cmp);
	    for (int i = 0; i<n; i++){
	        if (a[i] > i+1){
	            pos = 0;
	            break;
	        }
	    }
	    if (pos) printf("YES\n");
	    else printf("NO\n");
	}
	return 0;
}

