// https://www.codechef.com/problems/LONGSEQ

#include <stdio.h>
#include <string.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    char s[100001];
	    int hash[2] = {0};
	    scanf("%s", s);
	    int n = strlen(s);
	    for (int i = 0; i<n; i++){
	        if (s[i] == '1') hash[1]++;
	        else hash[0]++;
	    }
	    if (hash[0] == 1 || hash[1] == 1) printf("YES\n");
	    else printf("NO\n");
	    
	}
	return 0;
}

