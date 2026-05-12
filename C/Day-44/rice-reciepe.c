//https://www.codechef.com/problems/TIDRICE

#include <stdio.h>
#include <string.h>

struct vote {
    char name[21];
    int point;
};

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, len = 0;
	    scanf("%d", &n);
	    struct vote v[n];
	    for (int i = 0; i<n; i++){
	        int found = 0;
	        char s1[21], x;
	        scanf("%s %c", s1, &x);
	        for (int j = 0; j<len; j++){
	            if (strcmp(s1, v[j].name) == 0){
	                found = 1;
	                v[j].point = (x == '+') ? 1 : -1;
	                break;
	            }
	        }
	            if (found == 0) {
	                strcpy(v[len].name, s1);
	                v[len].point = (x == '+') ? 1 : -1;
	                len++;
	            }
	        
	    }
	    int sum = 0;
	    for (int i = 0; i<len; i++){
	        sum += v[i].point;
	    }
	    printf("%d\n", sum);
	}
	return 0;
}

