//https://www.codechef.com/problems/CALPOWER

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp (const void *a, const void *b){
    return *(char*)a - *(char*)b;
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    char s[101];
	    int sum = 0;
	    scanf("%s", s);
	    int n = strlen(s);
	    qsort(s, n, sizeof(char), cmp);
	    for (int i = 0; i<n; i++){
	        sum += (s[i]-96)*(i+1);
	    }
	    printf("%d\n", sum);
	}
	return 0;
}

