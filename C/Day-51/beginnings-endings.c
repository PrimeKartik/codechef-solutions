//https://www.codechef.com/problems/EQBEND

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
	    int n1, n2, min = n-1;
	    for (int i = 0; i<n; i++){
	        int target = arr[i];
	        for (int j = 0; j<n; j++){
	            if (arr[j] == target){
	                n1 = j;
	                break;
	            }
	        }
	        for (int k = n-1; k>=0; k--){
	            if (arr[k] == target){
	                n2 = n-k-1;
	                break;
	            }
	        }
	        if (n1+n2 < min ) min = n1+n2;
	    }
	    if(min == n-1) printf("-1\n");
	    else printf("%d\n", min);
	}
	return 0;
}

