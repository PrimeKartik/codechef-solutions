//https://www.codechef.com/START237D/problems/FINDALL

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, x;
	    scanf("%d", &n);
	    int c1 = 0, c2 = 0;
	    for (int i = 0; i<n; i++){
	        scanf("%d", &x);
	        if (x == 1) c1++;
	        else if (x == -1) c2++;
	    }
	    if (c1 == 0 && c2 == 0) printf("0\n");
	    else if (c1 == 0 && c2 > 0) printf("1\n");
	    else if (c1 > 0 && c2 == 0) printf("-1\n");
	    else {
	        if (c1 >= 2 && c2 >= 2) printf("-1 0 1\n");
	        else if (c1 >= 2 && c2 == 1) printf("-1 0\n");
	        else if (c1 == 1 && c2 >= 2) printf("0 1\n");
	        else printf("0\n");
	    }
	}
	return 0;
}

