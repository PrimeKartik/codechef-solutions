//https://www.codechef.com/problems/SPALNUM

#include <stdio.h>

int is_palindrome(int n){
    int rev = 0;
    for (int temp = n; temp>0; temp/=10){
        rev = rev*10 + (temp%10);
    }
    if (rev == n) return 1;
    return 0;
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
	    int l, r, sum = 0;
	    scanf("%d %d", &l, &r);
	    for (int i = l; i<=r; i++){
	        if (is_palindrome(i)) sum+=i;
	    }
	    printf("%d\n", sum);
	}
	return 0;
}

