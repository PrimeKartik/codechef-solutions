// https://www.codechef.com/problems/CRDGAME3

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int chef, rick;
	    scanf("%d %d", &chef, &rick);
	    int cd = (chef+8)/9;
	    int rd = (rick+8)/9;
	    if (cd < rd) printf("0 %d\n", cd);
	    else printf("1 %d\n", rd);
	}
	return 0;
}

