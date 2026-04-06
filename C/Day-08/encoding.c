#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n;
	    scanf("%d", &n);
	    char s[n+1];
	    scanf("%s", s);
	    for (int i = 0; i<n; i++){
	        s[i] = 'a' - s[i] + 'z';
	        
	        if (i%2 == 1){
	            char temp =  s[i-1];
	            s[i-1] = s[i];
	            s[i] = temp;
	        }
	    }
	    s[n] = '\0';
	    printf("%s\n", s);
	}
	return 0;
}

