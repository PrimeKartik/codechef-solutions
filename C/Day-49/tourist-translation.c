//https://www.codechef.com/problems/TOTR

#include <stdio.h>

int main() {
	int n;
	char alpha[27];
	scanf("%d %s", &n , alpha);
	while(n--){
	    char s[101];
	    scanf("%s", s);
	    for (int i = 0; s[i] != '\0'; i++){
	        if (s[i] >= 'A' && s[i] <= 'Z'){
	            printf("%c", alpha[s[i] - 'A'] - 32);
	        }
	        else if (s[i] >= 'a' && s[i] <= 'z'){
	            printf("%c", alpha[s[i] - 'a']);
	        }
	        else if (s[i] == '_') printf(" ");
	        else printf("%c", s[i]);
	    }
	    printf("\n");
	}
	return 0;
}

