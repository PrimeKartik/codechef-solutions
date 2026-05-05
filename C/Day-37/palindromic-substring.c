//https://www.codechef.com/problems/STRPALIN

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    char a[1002], b[1002];
	    scanf("%s", a);
	    scanf("%s", b);
	    int hash[26] = {0}, pos = 0;
	    for (int i = 0; a[i] != '\0'; i++){
	        int value = a[i] - 97;
	        hash[value]++;
	    }
	    for (int i = 0; b[i] != '\0'; i++){
	        int value = b[i] - 97;
	        if (hash[value]) {
	            pos = 1;
	            break;
	        }
	    }
	    if (pos) printf("YES\n");
	    else printf("NO\n");
	}
	return 0;
}

