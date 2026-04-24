//https://www.codechef.com/problems/COUPON2

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int d, c, a1, a2, a3, b1, b2, b3;
	    scanf("%d %d", &d, &c);
	    scanf("%d %d %d", &a1, &a2, &a3);
	    scanf("%d %d %d", &b1, &b2, &b3);
	    
	    int sum1 = a1+a2+a3;
	    int sum2 = b1+b2+b3;
	    
	    if (sum1 >= 150 && sum2 >= 150) d *= 2;
	    else if (sum1 < 150 && sum2 < 150) d = 0;
	    
	    if (d > c) printf("YES\n");
	    else printf("NO\n");
	}
	return 0;
}

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int d, c, a1, a2, a3, b1, b2, b3;
	    scanf("%d %d", &d, &c);
	    scanf("%d %d %d", &a1, &a2, &a3);
	    scanf("%d %d %d", &b1, &b2, &b3);
	    
	    int sum1 = a1+a2+a3;
	    int sum2 = b1+b2+b3;
	    
	    if (sum1 >= 150 && sum2 >= 150) d *= 2;
	    else if (sum1 < 150 && sum2 < 150) d = 0;
	    
	    if (d > c) printf("YES\n");
	    else printf("NO\n");
	}
	return 0;
}

