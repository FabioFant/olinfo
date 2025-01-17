// Punti: 100.0
#include <bits/stdc++.h>
using namespace std;
int main() {
  ifstream fin ("input.txt");
  ofstream fout ("output.txt");
  //Dichiarazione variabili
  int N, scala = 0;
  fin >> N;
  int caselle[N];
  //Riempire array
  for(int i = 0; i < N; i++){
    fin >> caselle[i];
  }
  scala = caselle[0];
  //Troviamo la scala
  for(int i = 1; i < N; i++){
    if((caselle[i]-caselle[i-1]) > scala){
      scala = caselle[i]-caselle[i-1];
    }
    
  }
  fout << scala;
}
