//https://www.codechef.com/START237D/problems/MAKETRIANGLE

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int x, y, z;
	    scanf("%d %d %d", &x, &y, &z);
	    int diff = 0;
	    if (x+y <= z){
	        diff = z - x - y + 1;
	    }else if (x+z <= y){
	        diff = y - x-z + 1;
	    }else if (z+y <= x){
	        diff = x - z - y +1;
	    }
	    printf("%d\n", diff);
	}
    return 0 ;
}

