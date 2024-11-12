#include <stdio.h>

int main() {
    // 2D array 
    int i,j;
    int scores[2][4] = {
        {65, 92, 84, 72},
        {35, 70, 59, 67}
    };
    
    //print output for nested loop
    for ( i = 0; i < 2; i++) {
        for ( j = 0; j < 4; j++) {

            printf("scores[%d][%d] = %d\n", i, j, scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}
