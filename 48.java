class Solution {
    public void rotate(int[][] matrix) {
        for(int row=0; row<matrix.length/2; row++){
            for(int col=0; col<matrix.length; col++){
                int tmp = matrix[row][col];
                matrix[row][col] = matrix[matrix.length-1-row][col];
                matrix[matrix.length-1-row][col] = tmp;
            }
        }
        for(int row=0; row<matrix.length; row++){
            for(int col=row+1; col<matrix.length; col++){
                int tmp = matrix[row][col];
                matrix[row][col] = matrix[col][row];
                matrix[col][row] = tmp;
            }
        }
    }
}
