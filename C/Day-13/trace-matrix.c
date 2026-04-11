//https://www.codechef.com/problems/TRACE

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n;
	    scanf("%d", &n);
	    int mat[n][n], tr[(2*n)-1];
	    for (int i = 0; i<(2*n)-1; i++){
	        tr[i] = 0;
	    }
	    for (int i = 0; i<n; i++){
	        for (int j = 0; j<n; j++){
	            scanf("%d", &mat[i][j]);
	        }
	    }
	    for (int i = 0; i<n; i++){
	        for (int j = 0; j<n; j++){
	            tr[i-j+(n-1)] += mat[i][j];
	        }
	    }
	    int max = -1;
	    for (int i = 0; i<(2*n)-1; i++){
 	        if (max < tr[i]) max = tr[i];
	    }
	    printf("%d\n", max);
	}
	return 0;

}

