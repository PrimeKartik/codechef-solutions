
#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int x, y;
        
        int c1 = 0, c2 = 0, c1_max = 0, c2_max = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &x);
            if (x != 0){
                c1++;
                if (c1 > c1_max ) c1_max = c1;
            }else c1 = 0;
            
        }

        for (int i = 0; i < n; i++) {
            scanf("%d", &y);
            if (y != 0){
                c2++;
                if (c2 > c2_max ) c2_max = c2;
            }else c2 = 0;
        }
        
        if (c1_max > c2_max) printf("OM\n");
        else if (c1_max < c2_max) printf("Addy\n");
        else printf("Draw\n");
        
        
    }
    return 0;
}
