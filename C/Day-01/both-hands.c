/*
Problem: I Can Use Both Hands!
Platform: CodeChef
Difficulty: Easy
Date: 30-03-2026
*/

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int l, r, m;
	    scanf("%d %d %d", &l, &r, &m);
	    int ans = (m/l) + (m/r);
	    if (m%l) ans++;
	    printf("%d\n", ans);
	    
	}
	return 0;
}

