// https://www.codechef.com/START234D/problems/BINCON

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n;
	    scanf("%d", &n);
	    if (n == 2)
	    printf("01\n");
	    else {
	        printf("0");
	        for (int i = 0; i<n-2; i++){
	            printf("1");
	        }
	        printf("0\n");
	    }
	    
	}
	return 0;
}

