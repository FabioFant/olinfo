// Punti: 100.0
#include <bits/stdc++.h>
using namespace std;
/*DP
1. Suddividere il problema in sotto-problemi
2. Definire il passo base
3. Definire il passo ricorsivo
4. Controllare lo stato prima di effettuare i calcoli (con il memo)
*/
vector<int> T(1);
vector<int> memo(1);
// CODE
// O(2^N) senza DP
// O(N) con DP
int f(int i)
{
    // PASSO BASE
    if(i >= T.size()) return 0;
    // Controllo dello stato
    if(memo[i] != -1) return memo[i];
    // PASSO RICORSIVO
    int skip = T[i] + f(i+2);
    int noSkip = T[i] + f(i+1);
    // Memorizza lo stato
    memo[i] = min(skip, noSkip);
    return memo[i]; // return min(skip, noSkip);
}
int main() {
  ifstream fin ("input.txt");
  ofstream fout ("output.txt");
  // INPUT
  int N;
  fin>>N;
  T.resize(N);
  memo.resize(N);
  for(int i = 0 ; i < N ; i++)
  {
      fin >> T[i];
      memo[i] = -1;
  }
  // CALL
  fout << min(f(0), f(1));
}
