//https://www.codechef.com/problems/SC31

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, x = 0;
	    scanf("%d", &n);
	    char ans[] = "0000000000";
	    char s[11];
	    for (int i = 0; i<n; i++){
	        scanf("%s", s);
	        for (int j = 0; j<10; j++){
	        if (s[j] == ans[j]) ans[j] = '0';
	        else ans[j] = '1';
	    }}
	    for (int i = 0; i<10; i++){
	        if (ans[i] == '1') x++;
	    }
	    printf("%d\n", x);
	}
	return 0;
}

