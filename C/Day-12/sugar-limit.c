// https://www.codechef.com/problems/SULIM

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        int n, l = 0;
        scanf("%d", &n);
        int a[n], b[n];
        for (int i = 0; i<n; i++){
            scanf("%d", &a[i]);
        }
        for (int i = 0; i<n; i++){
            scanf("%d", &b[i]);
        }
        int max_sat = 0;
        for (int l = 0; l<=100; l++){
            int sum = 0;
            for (int i = 0; i<n; i++){
                if (a[i] > 0 && b[i] <= l){
                    sum += a[i];
                }
            }
            int sat = sum - l;
            if (sat > max_sat){
                max_sat = sat;
            }
        }
        printf("%d\n", max_sat);
    }
    return 0;
}

