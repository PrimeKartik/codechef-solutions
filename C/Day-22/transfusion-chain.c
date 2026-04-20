//https://www.codechef.com/problems/TRANCHAIN

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n;
	    int ab = 0, o= 0, a= 0, b = 0;
	    scanf("%d", &n);
	    while(n--){
	        char s[3];
	        scanf("%s", s);
	        if (!strcmp(s, "AB")) ab++;
	        else if (s[0] == 'A') a++;
	        else if (s[0] == 'B') b++;
	        else if (s[0] == 'O') o++;
	    }
	    int max = (a > b) ? a : b;
	    max += o + ab;
	    printf("%d\n", max);
	}
	return 0;
}

