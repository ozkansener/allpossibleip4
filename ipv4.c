#include <stdio.h>
#include <stdlib.h>

int main() {
    int som;
    
    for (int i = 1; i < 256; i++) {
        for (int j = 1; j < 256; j++) {
            for (int g = 1; g < 256; g++) {
                for (int h = 1; h < 256; h++) {
                    printf("%d.%d.%d.%d\n",i,j,g,h);
                    ++som;
                }
            }
        }
    }
    printf("Som is:%d",som);
}
