//https://www.codechef.com/problems/CHEFSUM

#include <stdio.h>
#include <limits.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, idx;
	    scanf("%d", &n);
	    int arr[n];
	    long long sum = 0, min = LLONG_MAX;
	    for (int i = 0; i<n; i++){
	        scanf("%d", &arr[i]);
	        sum += arr[i];
	    }
	    for (int i = 0; i<n; i++){
	        long long target = sum + arr[i];
	        if (min > target) {
	            min = target;
	            idx = i+1;
	        }
	    }
	    printf("%d\n", idx);
	}
	return 0;
}

