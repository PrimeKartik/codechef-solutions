//https://www.codechef.com/problems/WEPCH

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int h, x, y, z, k;
	    scanf("%d %d %d %d %d", &h, &x, &y, &z, &k);
	    int hit1 = (h+x-1)/x;
	    int hit2 = 0;
	    int first_damage = k*y;
	    if (first_damage >= h){
	        hit2 = (h+y-1)/y;
	    }else {
	        int rem_h = h - first_damage;
	        int extra_hits = (rem_h+z-1)/z;
	        hit2 = k+ extra_hits;
	    }
	    int ans = (hit1 < hit2) ? hit1 : hit2;
	    printf("%d\n", ans);
	}
	return 0;
}

