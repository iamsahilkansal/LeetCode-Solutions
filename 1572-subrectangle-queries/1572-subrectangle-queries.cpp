class SubrectangleQueries {
public:
    int row, col;
    vector<vector<int>>rect;
    SubrectangleQueries(vector<vector<int>>& rectangle) {
        this->row=rectangle.size();
        this->col=rectangle[0].size();
        rect=rectangle;
    }
    
    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        if(row1==row2){
            for(int i=col1; i<=col2; i++){
                rect[row1][i]=newValue;
            }
        }
        else if(col1==col2){
            for(int i=row1; i<=row2; i++){
                rect[i][col1]=newValue;
            }
        }
        else{
            for(int i=row1; i<=row2; i++){
                for(int j=col1; j<=col2; j++){
                    rect[i][j]=newValue;
                }
            }
        }
    }
    
    int getValue(int row, int col) {
        return rect[row][col];
    }
};

/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj->getValue(row,col);
 */