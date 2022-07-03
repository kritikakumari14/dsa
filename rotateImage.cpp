#include <bits/stdc++.h>

using namespace std;
int main(){

   vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};
        int r=matrix.size();
        for(int i=0;i<r;i++){
            for(int j=i;j<r;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
            for(int k=0;k<r;k++){
            reverse(matrix[k].begin(),matrix[k].end());
        }
        for(auto itr:matrix){
            for(auto jt:itr){
                cout<<jt<<" ";
            }
            cout<<endl;
        }
        
    }
