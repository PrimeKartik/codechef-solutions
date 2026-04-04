#include <stdio.h>
#include <string.h>
int isVowel(char c){
    return strchr("AEIOU", c) != NULL;
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    char s1[9], s2[] = "CODETOWN";
	    int pos = 1;
	    scanf("%s", s1);
	    for (int i = 0; i<8; i++){
	        if (isVowel(s2[i]) != isVowel(s1[i])){
	            pos = 0;
	            break;
	        }
	    }
	    if (pos) printf("YES\n");
	    else printf("NO\n");
	}
	return 0;
}

