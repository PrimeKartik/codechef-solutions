#include <stdio.h>
#include <string.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    char a[11];
	    int x, realmadrid, malaga, barcelona, eibar;
	    int n = 4;
	    while(n--){
	        scanf("%s %d", a, &x);
	        if (strlen(a) == 10) realmadrid = x;
	        if (strlen(a) == 6) malaga = x;
	        if (strlen(a) == 5) eibar = x;
	        if (strlen(a) == 9) barcelona = x;
	        
	    }
	    if (barcelona > eibar && realmadrid < malaga) printf("Barcelona\n");
	    else printf("RealMadrid\n");
	    
	}
	return 0;
}

