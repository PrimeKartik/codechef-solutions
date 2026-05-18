//https://www.codechef.com/problems/CHFMOT18

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int s, n;
	    scanf("%d %d", &s, &n);
	    int divi= s/n;
	    if (s%2 != 0) divi++;
	    if (s%n > 1) divi++;
	    printf("%d\n", divi);
	}
	return 0;
}

