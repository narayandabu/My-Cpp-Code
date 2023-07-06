#include <bits/stdc++.h>
using namespace std;
 
 
 
vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid){   
    // int sizerow=grid.size(),sizecol=grid[0].size();
    // vector<vector<int>> mat(sizerow,vector<int>(sizecol));
    // return grid;
    // for(int i=0;i<sizerow;i++){
    //     for(int j=0;j<sizecol;j++){
    //         int ct1r{0},ct0r,ct1cl{0},ct0cl;
    //         for(int k=0;k<sizecol;k++){
    //             if(grid[i][k]==1)ct1r++;
    //         }
    //         ct0r=sizecol-ct1r;
    //         for(int k=0;k<sizerow;k++){
    //             if(grid[k][j]==1)ct1cl++;
    //         }
    //         ct0cl=sizerow-ct1cl;
    //         mat[i][j]=(ct1r+ct1cl-ct0r-ct0cl);
    //     }
    // }
    // return mat;
    // vector<int> rows1,cols1;
    // int sizerow=grid.size(),sizecol=grid[0].size();
    // for(int i=0;i<sizerow;i++){
    //     int ct1=0;
    //     for(int j=0;j<sizecol;j++){
    //         if(grid[i][j]==1)ct1++;
    //     }
    //     rows1.push_back(ct1);
    // }
    // for(int i=0;i<sizecol;i++){
    //     int ct1=0;
    //     for (int j = 0; j < sizerow; j++){
    //         if(grid[j][i]==1)ct1++;
    //     }
    //     cols1.push_back(ct1);
    // }
    // for(int i=0;i<sizerow;i++){
    //     for(int j=0;j<sizecol;j++){
    //         grid[i][j]=(2*(rows1[i]+cols1[j]))-sizecol-sizerow;
    //     }
    // }
    // return grid;

    int sizerow=grid.size(),sizecol=grid[0].size(),col0=0;
    for(int i=0;i<sizecol;i++){
        int ct1{0};
        for(int j=0;j<sizerow;j++){
            if(grid[j][i]>0)ct1++;
        }
        if(i==0)col0=ct1;
        else grid[0][i]=ct1;
    }
    for(int i=0;i<sizerow;i++){
        int ct1{0};
        for(int j=0;j<sizecol;j++){
            if(grid[j][i]>0)ct1++;
        }
        grid[i][0]=ct1;
    }
    for(int i=1;i<sizerow;i++){
        for(int j=1;j<sizecol;j++){
            grid[i][j]=2*(grid[0][j]+grid[j][0])-sizecol-sizerow;
        }
    }
    for(int i=1;i<sizerow;i++){
        grid[0][i]=2*(grid[0][0]+grid[0][i])-sizecol-sizerow;
    }
    for(int i=1;i<sizecol;i++){
        grid[i][0]=2*(col0+grid[i][0])-sizecol-sizerow;
    }
    grid[0][0]=2*(col0+grid[0][0])-sizecol-sizerow;
    return grid;
}