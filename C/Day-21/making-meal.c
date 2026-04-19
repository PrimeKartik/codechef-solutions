//https://www.codechef.com/problems/CFMM 

#include <stdio.h>
#include <string.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n;
	    scanf("%d", &n);
	    int c=0,o=0,d=0,e=0,h=0,f=0;
	    while(n--){
	        char s[1001];
	        scanf("%s", s);
	        int a = strlen(s);
	        for (int i = 0; i<a; i++){
	            if (s[i] == 'c') c++;
	            if (s[i] == 'o') o++;
	            if (s[i] == 'd') d++;
	            if (s[i] == 'e') e++;
	            if (s[i] == 'h') h++;
	            if (s[i] == 'f') f++;
	        }
	    }
	    c/=2;e/=2;
	    c = (c < e)? c:e;
	    o = (o < d)?o : d;
	    h = (h<f)? h:f;
	    c = (c<o)? c:o;
	    h = (h<c)?h:c;
	    printf("%d\n", h);
	}
	return 0;
}

