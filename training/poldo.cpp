// Punti: 5.0
/******************************************************************************
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int N;
vector<int> P;
vector<vector<int>> memo;
int fun(int i, int pan){
    
    // Passo base
    if(i >= N) return 0;
    
    // Memo
    if(pan != -1 && memo[i][pan] != -1) return memo[i][pan];
    
    // Passo ricorsivo
    int si = -1, no = -1;
    if(pan != -1 && P[pan] >= P[i]) return no = fun(i + 1, pan);
    else
    {
        no = fun(i + 1, pan);
        si = fun(i + 1, i) + 1;
    }
    if(pan != -1)
        return memo[i][pan] = max(si, no);
    else
        return max(si, no);
}
int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    
    // INPUT
    fin >> N;
    P.resize(N);
    memo.resize(N, vector<int>(N, -1));
    for(int i = 0; i < N; i++)
        fin >> P[i];
    
    fout << fun(0, -1);
    
    return 0;
}