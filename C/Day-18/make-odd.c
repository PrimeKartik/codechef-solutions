// https://www.codechef.com/problems/P2P

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n;
	    scanf("%d", &n);
	    char a[n], b[n];
	    scanf("%s", a);
	    scanf("%s", b);
	    int changeable = 0, c = 0;
	    for (int i = 0; i<n; i++){
	        if (a[i] == '1' && b[i] == '1'){
	            c++;
	        }
	        if ((a[i] == '1' && b[i] == '0') || (a[i] == '0' && b[i] == '1')){
	            changeable++;
	        }
	    }
	    if (c%2 == 1 || changeable){
	        printf("YES\n");
	    }else {
	        printf("NO\n");
	    }
	    
	}
	return 0;
}

