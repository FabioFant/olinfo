// Punti: 100.0
#include <bits/stdc++.h>
using namespace std;

int main () {
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    
    int N=0, V;
    fin >> N;
    V = N % 2;
    
    if (V == 0) {
        fout << "pari";
    }
    else
    {
       fout <<  "dispari";
    }
    return 0;
}