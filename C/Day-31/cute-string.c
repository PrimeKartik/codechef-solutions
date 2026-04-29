//https://www.codechef.com/START236D/problems/UWUWU

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, count = 0, max = 0;
	    scanf("%d", &n);
	    char c;
	    for (int i = 1; i<=n; i++){
	        scanf(" %c", &c);
	        if (c == 'u' || c == 'o'){
	            if (count%2 == 0) count++;
	            else count = 1;
	        }
	        else if (c == 'w'){
	            if (count%2 != 0) count++;
	            else count = 0;
	        }
	        else count = 0;
	        if (count > max) max = count;
	    }
	    if (max > 0 && max%2 == 0) max--;
	    printf("%d\n", max);
	}
	return 0;
}

