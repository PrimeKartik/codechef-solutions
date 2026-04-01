#include <stdio.h>
#include <string.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    char s[1001];
	    scanf("%s", s);
	    int n = strlen(s) , happy = 0;
	    for (int i = 0; i<n-2; i++){
	        if (strchr("aeiou", s[i]) && strchr("aeiou", s[i+1]) && strchr("aeiou", s[i+2])){
	            happy = 1;
	            break;
	        }
	    }
	    
	    if (happy) printf("HAPPY\n");
	    else printf("SAD\n");
	}
	return 0;
}

