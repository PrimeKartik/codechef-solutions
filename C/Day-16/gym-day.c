// https://www.codechef.com/problems/GYMDAY

#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int d, cost , coins, ans = -1;
	    scanf("%d %d %d", &d, &cost, &coins);
	    int trials = 0;
	    while(trials <= 100){
	        int new_d = d * trials; 
	        if (new_d > 100) new_d = 100;
	        double new_cost = cost*(100-new_d)/100.0;
	        
	        if (coins - trials >= new_cost){
	            ans = trials;
	            break;
	        }
	        trials++;
	        
	    }
	    printf("%d\n", ans);
	}
	return 0;
}

