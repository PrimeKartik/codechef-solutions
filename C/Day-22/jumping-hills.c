//https://www.codechef.com/problems/HILLS

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, u, d;
	    scanf("%d %d %d", &n, &u, &d);
	    int arr[n];
	    for (int i = 0; i<n; i++){
	        scanf("%d", &arr[i]);
	    }
	    int ans = 1, para = 1;
	    for (int i = 0; i<n-1; i++){
	        if (arr[i] == arr[i+1]) ans++;
	        else if (arr[i] < arr[i+1]){
	            int diff = arr[i+1] - arr[i];
	            if (diff <= u) ans++;
	            else break;
	        }
	        else if (arr[i] > arr[i+1]){
	            int diff = arr[i] - arr[i+1];
	            if (diff <= d) ans++;
	            else if (para--) ans++;
	            else break;
	        }
	    }
	    printf("%d\n", ans);
	}
	return 0;
}

