// https://www.codechef.com/START236D/problems/EXGS
#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", (x*100)+(y-x)*150);
    return 0;
}