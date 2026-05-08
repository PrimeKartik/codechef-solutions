//https://www.codechef.com/problems/LADDU

#include <stdio.h>
#include <string.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, point = 0;
	    char origin[17];
	    scanf("%d %s", &n, origin);
	    while(n--){
	        char var[17];
	        int x;
	        scanf("%s", var);
	        if (strcmp(var, "CONTEST_WON") == 0){
	            scanf("%d", &x);
	            point += 300;
	            if (x<=20) point += 20-x;
	        }else if (strcmp(var, "BUG_FOUND") == 0){
	            scanf("%d", &x);
	            point += x;
	        }else if (strcmp(var, "TOP_CONTRIBUTOR") == 0) point+=300;
	        else if (strcmp(var, "CONTEST_HOSTED") == 0) point+=50;
	    }
	    printf("%d\n", (strcmp(origin, "INDIAN")==0)?point/200 : point/400);
	}
	return 0;
}

