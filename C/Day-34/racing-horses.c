//https://www.codechef.com/problems/HORSES

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int cmp(const void *a, const void *b){
    return *(long*)a - *(long*)b;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        long s[n];
        for (int i = 0; i < n; i++) {
            scanf("%ld", &s[i]);
        }
        int min = INT_MAX;
        qsort(s, n, sizeof(long), cmp);
        for (int i = 0; i<n-1; i++){
            long diff = s[i+1] - s[i];
            if (diff < min) min = diff;
        }
        printf("%ld\n", min);
    }
    return 0;
}
