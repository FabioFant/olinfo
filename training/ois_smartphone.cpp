// Punti: 100.0
#include <bits/stdc++.h>
using namespace std;
int main() {
  ifstream fin ("input.txt");
  ofstream fout ("output.txt");
  int N;
  fin >> N;
  int P[N];
  
  long long int costo;
  int telefono;
  for(int i = 0; i < N; i++){
    fin >> P[i];
  }
  costo = P[0];
  telefono = P[0];
  for(int i = 1; i < N; i++){
    if(P[i] > telefono){
      costo += P[i];
      telefono = P[i];
    }
  }
  fout << costo;
}
