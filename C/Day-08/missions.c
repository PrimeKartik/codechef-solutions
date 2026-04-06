#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, c, bal = 0, spe_bal = 0, ans;
	    scanf("%d %d", &n, &c);
	    int arr[n];
	    for (int i = 0; i<n; i++){
	        scanf("%d", &arr[i]);
	    }
	    char s[n+1];
	    scanf("%s", s);
	    
	    for (int i = 0; i<n; i++){
	        if (s[i] == '0'){
	            bal += arr[i];
	        }else {
	            spe_bal += arr[i];
	        }
	    }
	    ans = bal;
	    if (spe_bal > c && bal >= c){
	        ans = bal+spe_bal-c;
	    }
	    printf("%d\n", ans );
	}
}

