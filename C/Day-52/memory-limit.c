//https://www.codechef.com/problems/CBARG

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        int n, m;
        long long total = 0, curr = 0;
        scanf("%d", &n);
        for (int i = 0; i<n; i++){
            scanf("%d", &m);
            if (m > curr) total += m-curr;
            curr = m;
        }
        printf("%lld\n", total);
    }
    return 0;
}

