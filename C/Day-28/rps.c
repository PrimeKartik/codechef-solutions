//https://www.codechef.com/problems/PASCRO

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n;
	    scanf("%d", &n);
	    char s1[n], s2[n];
	    scanf("%s", s1);
	    scanf("%s", s2);
	    int c1 = 0, c2 = 0;
	    for (int i = 0; i<n; i++){
	        if (s1[i] == 'R'){
	            if (s2[i] == 'R') continue;
	            else if (s2[i] == 'S') c1++;
	            else c2++;
	        }
	        else if (s1[i] == 'S'){
	            if (s2[i] == 'S') continue;
	            else if (s2[i] == 'P') c1++;
	            else c2++;
	        }
	        else{
	            if (s2[i] == 'P') continue;
	            else if (s2[i] == 'R') c1++;
	            else c2++;
	        }
	    }
	    int ans = 0, total = c1+c2;
	    if (c1 <= c2){
	        ans = ((c2-c1)/2)+1;
	    }
	    printf("%d\n",ans);
	}
	return 0;
}

