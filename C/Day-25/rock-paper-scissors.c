//https://www.codechef.com/problems/ROCPAPSCI

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n;
	    scanf("%d", &n);
	    int c = n;
	    char s[n+1];
	    scanf("%s", s);
	    for (int i = 0; i<n-1; i++){
	        if (s[i] == s[i+1]){
	            c--;
	            i++;
	        }
	    }
	    printf("%d\n", c);
	}
	return 0;
}

