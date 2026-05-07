//https://www.codechef.com/problems/SWAPCW

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        char s[n+1];
        scanf("%s", s);
        for (int i = 0; i<n/2; i++){
            if (s[i] > s[n-i-1]){
                char temp = s[i];
                s[i] = s[n-i-1];
                s[n-i-1] = temp;
            }
        }
        
        int pos = 1;
        for (int i = 0; i<n-1; i++){
            if (s[i] > s[i+1]){
                pos = 0;
                break;
            }
        }
        if(pos) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

