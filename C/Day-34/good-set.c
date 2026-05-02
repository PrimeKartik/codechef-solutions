//https://www.codechef.com/problems/GOODSET

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, p = 1;
	    scanf("%d", &n);
	    while(n--){
	        printf("%d ", p);
	        p+=2;
	    }
	    printf("\n");
	}
	return 0;
}

