///https://www.codechef.com/problems/EZSPK

#include <stdio.h>

int is_con(char c){
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        return 0;
    }
    return 1;
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, count = 0, flag = 0;
	    scanf("%d", &n);
	    char c;
	    for (int i = 0; i<n; i++){
	        scanf(" %c", &c);
	        if (is_con(c)){
	            count ++;
	        }else count = 0;
	        if (count > 3) flag = 1;
	    }
	    if (flag) printf("YES\n");
	    else printf("NO\n");
	}
	return 0;
}

