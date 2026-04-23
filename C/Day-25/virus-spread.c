//https://www.codechef.com/problems/COVID19

#include <stdio.h>

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
	    int c = 1, c_max = 0, c_min = 10;
	    for (int i = 0 ; i<n-1; i++){
	        int diff = arr[i+1] - arr[i];
	        
	        if (diff <= 2) c++;
	        else {
	            if (c < c_min){
	                c_min = c;
	            }
	            c = 1;
	        }
	        
	        if (c > c_max) c_max = c;
	    }
	    if (c < c_min) c_min = c;
	    printf("%d %d\n", c_min, c_max);
	}
	return 0;
}

