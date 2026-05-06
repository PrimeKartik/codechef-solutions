//https://www.codechef.com/START237D/problems/FINELE

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        int n, x;
        scanf("%d", &n);
        int ans = 0;
        for (int i = 0; i<n; i++){
            scanf("%d", &x);
            if (((n-1)&i) == i)
            ans ^= x;
        }
        printf("%d\n", ans);
    }
    return 0;
}

