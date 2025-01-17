// Punti: 100.0
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    map<long long , long long> values;
    values[0] = 0;
    long long N;
    long long M, L;
    fin >> N >> M >> L;
    for(int i = 0; i < N; i++)
    {
        long long checkpoint;
        fin >> checkpoint;
        long long entry = checkpoint - M;
        if (entry < 0){
            values[0] += 1;
        }
        else{
            values[entry] += 1;
        }
        long long exit = checkpoint + M + 1;
        if (exit <= L){
            values[exit] -= 1;
        }
    }
    long long res = INT_MAX;
    long long curr = 0;
    for(auto i : values)
    {
        curr += i.second;
        if (curr < res) res = curr;
    }
    fout << res;
    return 0;
}
