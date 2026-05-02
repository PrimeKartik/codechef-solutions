//https://www.codechef.com/problems/TRUEDARE

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int t1, d1, t2, d2, x, pos = 1;
	    scanf("%d", &t1);
	    int truths[101] = {0}, dares[101] = {0};
	    for (int i = 0; i<t1; i++){
	        scanf("%d", &x);
	        truths[x]++;
	    }
	    scanf("%d", &d1);
	    for (int i = 0; i<d1; i++){
	        scanf("%d", &x);
	        dares[x]++;
	    }
	    scanf("%d", &t2);
	    for (int i = 0; i<t2; i++){
	        scanf("%d", &x);
	        if(!truths[x]) pos = 0;
	        
	    }
	    scanf("%d", &d2);
	    for (int i = 0; i<d2; i++){
	        scanf("%d", &x);
	        if(!dares[x]) pos = 0;
	    }
	    if (pos) printf("yes\n");
	    else printf("no\n");
	}
	return 0;
}

