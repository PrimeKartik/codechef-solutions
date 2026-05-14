//https://www.codechef.com/problems/TABLET

#include <stdio.h>
#include <limits.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        int n, b, max = INT_MIN;
        scanf("%d %d", &n, &b);
        for (int i = 0; i<n; i++){
            int w, h, price;
            scanf("%d %d %d", &w, &h, &price);
            int area = w*h;
            if (max < area && price <= b) max = area;
        }
        if (max == INT_MIN) printf("no tablet\n");
        else printf("%d\n", max);
    }
    return 0;
}

