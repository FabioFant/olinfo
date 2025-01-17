// Punti: 100.0
#include <bits/stdc++.h>
using namespace std;

ifstream fin("input.txt");
ofstream fout("output.txt");

int main()
{
    int N, M;
    fin >> N >> M;

    if(N > M) return fout << -1, 0;

    vector<vector<char>> matrix(N, vector<char>(M, '.'));

    for(pair<int, int> pos = {0,0}; pos.first != N-1; pos = {pos.first +1, pos.second+1}){
        matrix[pos.first+1][pos.second] = '#';
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++)
            fout << matrix[i][j];
        fout << endl;
    }

    return 0;
}
