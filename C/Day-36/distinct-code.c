//https://www.codechef.com/problems/DISTCODE

#include <stdio.h>
#include <string.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    char s[10002];
	    scanf("%s", s);
	    int n = strlen(s);
	    int seen[26][26] = {0};
	    int c = 0;
	    for (int i = 0; i<n-1; i++){
	        int first = s[i] - 'A';
	        int second = s[i+1] - 'A';
	        seen[first][second]++;
	        if (seen[first][second] == 1) c++;
	    }
	    printf("%d\n", c);
	}
	return 0;
}

