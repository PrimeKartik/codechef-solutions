//https://www.codechef.com/START236D/problems/PALKINS

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, k, x;
	    scanf("%d %d", &n, &k);
	    int arr[101], len = 0;;
	    for(int i = 0; i<n; i++){
	        scanf("%d", &x);
	        if (x != k) {
	            arr[len] = x;
	            len++;
	        }
	    }
	    int pal = 1;
	    for (int i = 0; i<len/2; i++){
	        if (arr[i] != arr[len-i-1]) pal = 0;
	    }
	    if (pal) printf("YES\n");
	    else printf("NO\n");
	}
	return 0;
}

