//https://www.codechef.com/problems/BROKPHON

#include <stdio.h>

int main() {
	int t; 
	scanf("%d", &t);
	while(t--){
	    int n;
	    scanf("%d", &n);
	    int arr[n], c = 0;
	    for (int i = 0; i<n; i++){
	        scanf("%d", &arr[i]);
	    }
	    if(arr[0] != arr[1]) c++;
	    for (int i = 1; i<n-1; i++){
	        if ((arr[i] != arr[i+1]) || (arr[i] != arr[i-1])) c++;
	    }
	    if (arr[n-1] != arr[n-2]) c++;
	    
	    printf("%d\n", c);
	}
	return 0;
}

