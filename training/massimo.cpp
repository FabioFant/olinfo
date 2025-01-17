// Punti: 100.0
#include <bits/stdc++.h>

using namespace std;

int trova_massimo(int N, vector<int> V){
    int maxi=-1001;
    for(int i=0; i<N; i++){
        if(V[i]> maxi){
            maxi = V[i];
        }
    }
    return maxi;
}

#ifndef EVAL //Se c'è EVAL nella compilazione allora non lo esegue | EVAL esiste nella compilazione del sito delle olimpiadi, perciò viene eseguito su Codeblocks ma non sul sito.
int main(){

    ifstream fin("input.txt");
    ofstream fout("output.txt");

    int N; fin >> N;
    vector<int>V(N);

    for(int i=0; i<N; i++){
        fin >> V[i];
    }
    cout << trova_massimo(N, V);
    return 0;
}
#endif // EVAL
