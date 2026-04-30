//https://www.codechef.com/problems/XORMAX

#include <stdio.h>
#include <string.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    char a[500005], b[500005];
	    scanf("%s", a);
	    scanf("%s", b);
	    int n = strlen(a);
	    int c = 0;
	    for (int i = 0; i<n; i++){
	        if (a[i] == '1') c++;
	        if (b[i] == '1') c++;
	    }
	    int lol = (c<=n)?c:(2*n)-c;
	        for (int i = 1; i<=n; i++){
	            if (i<=lol) printf("1");
	            else printf("0");
	        }
	        printf("\n");
	}
	return 0;
}

