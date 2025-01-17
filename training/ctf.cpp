// Punti: 100.0
#include <bits/stdc++.h>
using namespace std;
int main() {
  ifstream fin("input.txt");
  ofstream fout("output.txt");
  long long Q;
  fin >> Q;
  for (int i = 0; i < Q; i++) {
    // Ris(N) = 2L + 1
    long long N;
    fin >> N;
    long long N_temp = N;
    long long P = 1; // Potenza di 2 più piccola o uguale di N
    while (N_temp) {
      P = N_temp;
      N_temp &= (N_temp - 1);
    }
    long long L = N - P; // Rimanente per arrivare a N
    fout << 2 * L + 1 << endl;
  }
}