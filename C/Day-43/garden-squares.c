//https://www.codechef.com/problems/GARDENSQ

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int n, m, count = 0;
	    scanf("%d %d", &n, &m);
	    char grid[52][52];
	    for (int i = 0; i<n; i++)
	       scanf("%s", grid[i]);
	    
	    for (int i = 0; i<n; i++){
	        for (int j = 0; j<m; j++){
	            char color = grid[i][j];
	            
	            for (int d = 1; (i+d < n) && (j+d < m); d++){
	                if (grid[i+d][j] == color && grid[i][j+d] == color && grid[i+d][j+d] == color) count++;
	            }
	        }
	    }
	    printf("%d\n", count);
	}
	return 0;
}

