// https://www.codechef.com/problems/STUDVOTE

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, k;
	    scanf("%d %d", &n, &k);
	    int arr[n], hash[101] = {0};
	    for (int i = 0; i<n; i++){
	        scanf("%d", &arr[i]);
	        hash[arr[i]]++;
	        if (arr[i] == i+1) hash[arr[i]] = -101;
	    }
	    int c = 0;
	    for (int i = 1; i<101; i++){
	        if (hash[i] >= k && hash[i] >= 0){
	            c++;
	        }
	    }
	    printf("%d\n", c);
	}
	return 0;
}

