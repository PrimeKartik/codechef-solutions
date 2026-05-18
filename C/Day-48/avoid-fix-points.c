//https://www.codechef.com/problems/NOFIX

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, c=0, x;
	    scanf("%d", &n);
	    int pos = 1;
	    for (int i = 0; i<n; i++, pos++){
	        scanf("%d", &x);
	        if (x == pos) {
	            c++;
	            pos++;
	        }
	    }
	    printf("%d\n", c);
	}
	return 0;
}

