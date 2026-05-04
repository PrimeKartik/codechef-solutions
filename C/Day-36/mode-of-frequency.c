//https://www.codechef.com/problems/MODEFREQ

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, x;
	    scanf("%d", &n);
	    int freq[11] = {0};
	    for (int i = 0; i<n; i++){
	        scanf("%d", &x);
	        freq[x]++;
	    }
	    int freq2[10003] = {0};
	    int max = -1, ans = 0;
	    for (int i = 1; i<=10; i++){
	        freq2[freq[i]]++;
	    }
	    for (int i = 1; i<=n; i++){
	        if (freq2[i] > max){
	            max = freq2[i];
	            ans = i;
	        }
	    }
	    printf("%d\n", ans);
	}
	return 0;
}

