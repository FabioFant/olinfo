// Punti: 100.0
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream fin ("input.txt");
    ofstream fout ("output.txt");

    int N, A, B, Som, Max = -1;

    fin >> N;

    for(int i=0; i<N; i++)
    {
        fin >> A >> B;

        Som = A + B;

        if(Som % 2 == 0 && Som > Max)
        {
            Max = Som;
        }

    }

    fout << Max;

    return 0;
}