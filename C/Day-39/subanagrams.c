//https://www.codechef.com/problems/SUBANAGR

#include <stdio.h>

int minx(int a, int b){
    return (a<b)?a:b;
}

int main() {
	int n;
	scanf("%d", &n);
	int min[26];
	for (int k = 0; k<26;k++){
	        min[k] = 1000;
	    }
	for (int i = 0; i<n; i++){
	    char s[101];
	    scanf("%s", s);
	    int freq[26] = {0};
	    for (int j = 0; s[j] != '\0'; j++){
	        freq[s[j]-'a']++;
	    }
	    for (int k = 0; k<26;k++){
	        min[k] = minx(min[k], freq[k]);
	    }
	}
	int flag = 0;
	for (int i = 0; i<26; i++){
	    for (int j = 0; j<min[i]; j++){
	        printf("%c", 'a'+i);
	        flag = 1;
	    }
	}
	if (!flag) printf("no such string");
	return 0;
}

