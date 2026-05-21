//https://www.codechef.com/problems/MIRRIM

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        int n, flag = 1;
        scanf("%d", &n);
        int arr[n];
        for (int i=0; i<n; i++){
            scanf("%d", &arr[i]);
        }
        int first = arr[0], last = arr[n-1];
        for (int i = 1; i<n/2; i++){
            int d = arr[i] - first;
            if (last - arr[n-i-1] != d){
                flag = 0;
                break;
            }
        }
        if (flag)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

