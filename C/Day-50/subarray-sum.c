//https://www.codechef.com/problems/P3149

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, c = 0;
	    scanf("%d", &n);
	    int arr[n];
	    int first = -1, last = -1;
	    for (int i = 0; i<n; i++){
	        scanf("%d", &arr[i]);
	        if (arr[i] > 0 && first == -1) first = i;
	        if (first != i && arr[i] > 0) last = i;
	    }
	    if (first == -1 || last == -1){
	        printf("0\n");
	    }else {
    	    for (int i = first+1; i<last; i++){
    	        if (arr[i]<0) c++;
    	    }
    	    printf("%d\n", c);
	    }
	}
	return 0;
}

