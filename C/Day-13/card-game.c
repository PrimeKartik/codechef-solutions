//https://www.codechef.com/problems/CRDGAME

#include <stdio.h>

int sum_digits(int temp){
    int sum = 0;
    while(temp > 0){
        sum += temp%10;
        temp /= 10;
    }
    return sum;
}
int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        int n, a, b;
        int pa = 0, pb = 0;
        scanf("%d", &n);
        for (int i = 0; i<n; i++){
            scanf("%d %d", &a, &b);
            if (sum_digits(a) > sum_digits(b)) pa++;
            else if (sum_digits(a) < sum_digits(b)) pb++;
            else {
                pa++;
                pb++;
            }
        }
        if (pa > pb) printf("0 %d\n", pa);
        else if (pb > pa) printf("1 %d\n", pb);
        else printf("2 %d\n", pa);
    }
    return 0;
}

