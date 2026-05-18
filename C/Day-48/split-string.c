//https://www.codechef.com/problems/SPLITIT

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n;
	    scanf("%d", &n);
	    char s[n+1];
	    scanf("%s", s);
	    char target = s[n-1];
	    int hash[27] = {0};
	    for (int i = 0; i<n-1; i++){
	        hash[s[i]-'a']++;
	    }
	    if (hash[target - 'a']) printf("YES\n");
	    else printf("NO\n");
	}
	return 0;
}

