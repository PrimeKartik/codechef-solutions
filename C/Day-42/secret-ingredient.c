//https://www.codechef.com/problems/PCJ18A

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, x, y, like = 0;
	    scanf("%d %d", &n,&x);
	    while(n--){
	        scanf("%d", &y);
	        if (y >= x) like = 1;
	    }
	    if (like) printf("YES\n");
	    else printf("NO\n");
	}
	return 0;
}

