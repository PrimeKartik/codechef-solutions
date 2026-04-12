// https://www.codechef.com/problems/PERMOR

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n;
	    scanf("%d", &n);
	    for (int i = 0; i<n; i++){
	        printf("%d ", n-i);
	    }
	    printf("\n");
	}
	return 0;
}

