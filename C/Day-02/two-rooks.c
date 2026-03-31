#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	   int x1, x2, y1, y2;
	   scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	   
	   if (x1 != x2 && y1 != y2) printf("NO\n");
	   else printf("YES\n");
	   
	}
	return 0;
}

