//https://www.codechef.com/problems/EQUALCOIN

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        int x, y;
        scanf("%d %d", &x, &y);
        if (x%2 != 0) printf("no\n");
        else if (x == 0 && y%2 != 0) printf("no\n");
        else printf("yes\n");
    }
    return 0;
}

