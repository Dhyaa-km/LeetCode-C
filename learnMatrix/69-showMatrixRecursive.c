
#include <stdio.h>
void matriceRecursive(int mat[2][2],int i, int j){
    if (i<2)
    {
        if (j<2)
        {
           printf("%d ", mat[i][j]);
           matriceRecursive(mat, i, j+1);
        }else
        {
            printf("\n");
            matriceRecursive(mat, i+1, 0);
        }
    }
}

int main(){
    int mat[2][2]= {
        {2, 0},
        {2, 5}
    };
    printf("the elements of the matrices are: \n");
    matriceRecursive(mat, 0, 0);
    return 0;
}