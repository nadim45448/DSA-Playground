#include<bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>>&matrix){
    int n=matrix.size();

    // transpose matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    //reversing each row of the matrix
    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }


}

int main()
{
    
    return 0;
}