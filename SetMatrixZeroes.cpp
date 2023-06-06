#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &mat)
{
	// Write your code here.
	queue<pair<int,int>> q;
	int n = mat.size();
	int m = mat[0].size();
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			if(mat[i][j] == 0) q.push({i,j});
		}
	}
	if(q.size()==0) return;
	while(!q.empty()) {
		int row = q.front().first;
		int col = q.front().second;
		q.pop();
		for(int i=0; i<n; i++) {
			mat[i][col] = 0;
		}
		for(int j=0; j<m; j++) {
			mat[row][j] = 0;
		}
	}
}
