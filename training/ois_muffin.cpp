// Punti: 100.0
#include <bits/stdc++.h>
using namespace std;
int main() {
  ifstream fin ("input.txt");
  ofstream fout ("output.txt");
  int n, k, sommaMax = 0, sommaTemp;
  fin>>n;
  int muffin[n];
  fin>>k;
  //Riempi array
  for(int i = 0 ; i < n ; i++){
    fin>>muffin[i];
  }
  //Calcola prima somma
  for(int i = 0; i < k; i++){
    sommaMax += muffin[i];
  }
  sommaTemp = sommaMax;
  //Calcola somma
  for(int i = 1 ; i < n-k+1 ; i++){
    sommaTemp = sommaTemp + muffin[i+k-1] - muffin[i-1];
    if(sommaMax < sommaTemp) sommaMax = sommaTemp;
  }
  fout << sommaMax;
}
