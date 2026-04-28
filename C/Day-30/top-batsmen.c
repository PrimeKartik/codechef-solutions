//https://www.codechef.com/problems/BESTBATS

#include <stdio.h>

int count(int *p, int target){
    int c = 0;
    for (int i = 0; i<11; i++){
        if (*(p+i) == target) c++;
    }
    return c;
}

int cmp(const void *a, const void *b){
    return *(int*)b - *(int*)a;
}

int nCr(int n, int r){
    int ans = 1;
    for (int i = 1; i<= r; i++){
        ans = ans * (n-i+1)/i;
    }
    return ans ;
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int arr[11], k;
	    for (int i = 0; i<11; i++){
	        scanf("%d", &arr[i]);
	    }
	    scanf("%d", &k);
	    qsort(arr, 11, sizeof(int), cmp);
	    int cheetah = arr[k-1];
	    int freq = count(arr, cheetah);
	    int r = 0;
	    for (int i = 0; i<k; i++){
	        if (arr[i] == cheetah){
	            r++;
	        }
	    }
	    printf("%d\n", nCr(freq, r));
	}
}

