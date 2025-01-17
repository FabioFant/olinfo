// Punti: 100.0
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    int N;
    fin >> N;
    vector<int> L(N);
    vector<vector<int>> M(N);
    int res = 0;
    queue<int> q;
    // INPUT
    for(int i = 0; i < N; i++)
    {
        int nda;
        fin >> nda >> L[i];
        if(L[i] == 0)
        {
            q.push(i);
            res++;
        }
        for(int j = 0; j < nda; j++)
        {
            int am;
            fin >> am;
            M[am].push_back(i); // direzione invertita
        }
    }
    while(!q.empty())
    {
        int curr = q.front();
        q.pop();
        for(int amico : M[curr]) // passa per gli amici
        {
            if(--L[amico] == 0) // se l'amico arriva a 0 amici richiesti
            {
                q.push(amico);
                res++;
            }
        }
    }
    fout << res;
    return 0;
}
