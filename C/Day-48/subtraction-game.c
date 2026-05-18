//https://www.codechef.com/problems/AMSGAME1

#include <stdio.h>

int gcd(int a, int b){
    if (b == 0) return a;
    return gcd(b, a%b);
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n;
	    scanf("%d", &n);
	    int  arr[n];
	    for (int i = 0; i<n; i++){
	        scanf("%d", &arr[i]);
	    }
	    int result = arr[0];
	    for (int i = 1; i<n; i++){
	        result = gcd(result, arr[i]);
	    }
	    printf("%d\n", result);
	}
	return 0;
}