#include <stdio.h>

int main() {
    // 2D array 
    int i,j;
    
    int scores[2][2] = 
	{{65, 92}, {84, 72}};
    
    //print output for nested loop with 2 rows and 2 columns
    for ( i = 0; i < 2; i++) {
        for ( j = 0; j < 2; j++) {
        	printf("scores[%d][%d] = %d\n", i, j, scores[i][j]);
        }
        
    }

        	

          int a,b;
    int score[2][2] =  
	{{35, 70} , {59, 67}};
    
    //print output for nested loop with 2 rows and 2 columns
    for ( a = 0; a < 2; a++) {
        for ( b = 0; b < 2; b++) {
		
		 printf("scores[%d][%d] = %d\n", a, b, scores[a][b]);
        }
        }

    return 0;
}
