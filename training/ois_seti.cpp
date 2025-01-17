// Punti: 100.0
#include <bits/stdc++.h>
using namespace std;
vector<int> memo;
vector<int> v;
const int mod = 1e9+7;
int f(int i)
{
    // passo base
    if(i < 0)
    {
        return 1;
    }
    // Memo
    if(memo[i] != -1)
    {
        return memo[i];
    }
    // passo ricorsivo
    int a = f(i - v[i] - 1);
    int b = f(i - 1);
    return memo[i] = (a + b) % mod;
}
int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    int N; fin >> N;
    v.resize(N);
    memo.resize(N);
    for(int i = 0; i < N; i++)
    {
        memo[i] = -1;
        fin >> v[i];
    }
    fout << f(N - 1);
}
