//https://www.codechef.com/problems/STONES

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    char j[101], s[101];
	    scanf("%s", j);
	    scanf("%s", s);
	    int hash[58] = {0}, c = 0;
	    for (int i = 0; j[i] != '\0'; i++){
	        hash[j[i]-'A']++;
	    }
	    for (int i = 0; s[i]!='\0'; i++){
	        if (hash[s[i]-'A']) c++;
	    }
	    printf("%d\n", c);
	}
	return 0;
}

