// https://www.codechef.com/problems/NEWPIECE

#include <stdio.h>
int isodd(int n){
    return n%2;
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int a, b, p, q, ans;
	    scanf("%d %d %d %d", &a, &b, &p, &q);
	    int sum1 = a+b;
	    int sum2 = p+q;
	    if (a == p && b == q) ans = 0;
	    else if ((isodd(sum1) && isodd(sum2)) || (!isodd(sum1) && !isodd(sum2))) ans = 2;
	    else ans = 1;
	    printf("%d\n", ans);
	}
	return 0;
}

