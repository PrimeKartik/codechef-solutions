//https://www.codechef.com/problems/CHFM

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n;
	    scanf("%d", &n);
	    int arr[n];
	    long long sum = 0;
	    for (int i = 0; i<n; i++){
	        scanf("%d", &arr[i]);
	        sum += arr[i];
	    }
	    if (sum % n != 0){
	        printf("Impossible\n");
	        continue;
	    }
	    long long  mean = sum/n;
	    int idx = 0;
	    for (int i = 0; i<n; i++){
	        if (arr[i] == mean) {
	            idx = i+1;
	            break;
	        }
	    } 
	    if (idx) printf("%d\n", idx);
	    else printf("Impossible\n");
	}
	return 0;
}

