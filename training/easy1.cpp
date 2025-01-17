// Punti: 100.0
#include <bits/stdc++.h>

using namespace std;

int main()
{
    //File Input, Output
    ifstream fin ("input.txt");
    ofstream fout ("output.txt");

    //Variabili
    int n;
    int massimo = -1001;
    int v;

    //Leggere l'input
    fin >> n;

    //Trovare massimo
    for(int i=0; i<n; i++)
    {
        fin >> v;
        if(v > massimo)
        {
            massimo = v;
        }
    }

    fout << massimo;

    return 0;
}