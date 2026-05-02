class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int top=0;
        int right=matrix[0].size()-1;
        int bottom=matrix.size()-1;
        int left=0;

        while(top<=bottom and left<=right){
            //left->right

            for(int i=left;i<=right;i++){
                result.push_back(matrix[top][i]);

            }
            top++;

            //top->bottom
            for(int i=top;i<=bottom;i++){
                result.push_back(matrix[i][right]);
            }
            right--;

            //right->left
            if(top<=bottom){
                for(int i=right;i>=left;i--)
                {
                    result.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            //bottom->top
            if(right>=left){
                for(int i=bottom;i>=top;i--){
                    result.push_back(matrix[i][left]);
                    
                }
                left++;
            }
        }
        return result;
    }
};
