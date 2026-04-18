//https://www.codechef.com/problems/BRACKETS

#include <stdio.h>
#include <string.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    char a[100001];
	    scanf("%s", a);
	    int n = strlen(a);
	    int bal = 0, max = 0;
	    for (int i = 0; i<n; i++){
	        if (a[i] == '(') bal++;
	        else bal--;
	        if (bal > max) max = bal;
	    }
	    for (int i = 0; i<2*max; i++){
	        if (i < max) printf("(");
	        else printf(")");
	    }
	    printf("\n");
	}
	return 0;
}

