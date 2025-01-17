// Punti: 65.0
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    int N, A, B, C, D, E = -1;
    fin >> N;

    int S[N];

    for(int i=0; i<N; i++)
    {
        fin >> S[i];
    }

    for(int i=0; i<N; i++)
    {
        A = S[i];

        for(int e=0; e<N; e++)
        {
            if(e != i)
            {
                B = S[e];

                C = B + A;
                D = C % 2;

                if(D == 0)
                {
                    E = max(E, C);
                }
            }
        }
    }

    fout << E;
    return 0;
}