//https://www.codechef.com/problems/RECNDSTR

#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        char s[1000001];
        scanf("%s", s);
        int n = strlen(s);
        if (n < 3) {
            printf("Yes\n");
            continue;
        }
        int pos = 1;
        for (int i = 1; i<n; i++){
            char left = s[(i+1)%n];
            char right = s[(i-1+n)%n];
            if (left != right){
                pos = 0;
                break;
            }
        }
        if (pos) printf("YES\n");
        else printf("NO\n");
    }
    return 0;

}

