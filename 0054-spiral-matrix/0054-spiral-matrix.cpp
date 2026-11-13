class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int top=0;
        int bottom = matrix.size()-1;
        int left=0;
        int right =matrix[0].size()-1;
        vector<int> res;
        while(top <= bottom && left <= right){
            //l->r
            for(int i=left; i<=right;i++){
                res.push_back(matrix[top][i]);
            }
            top++;
            //t->b
            for(int i=top;i<=bottom;i++){
                res.push_back(matrix[i][right]);
            }
            right--;
            //r->l
            if(top<=bottom){
            for(int i=right;i>=left;i--){
                res.push_back(matrix[bottom][i]);
            }
            bottom--;
            }
            //b->t
            if(left<=right){
            for(int i=bottom;i>=top;i--){
                res.push_back(matrix[i][left]);
            }
            left++;
            }

        }
        return res;



    }
};