//https://www.codechef.com/problems/EQPAIR

#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n+1];
        for (int i = 0; i<n; i++){
            scanf("%d", &arr[i]);
        }
        qsort(arr, n, sizeof(int), cmp);
        long long c = 1, ans = 0;
        for (int i = 0; i<n; i++){
            if (arr[i] == arr[i+1]){
                c++;
            }else{
                ans += c*(c-1)/2;
                c = 1;
            }
        }
        printf("%lld\n", ans);
    }
    return 0;
}

