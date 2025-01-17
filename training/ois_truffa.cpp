// Punti: 100.0
#include <bits/stdc++.h>
using namespace std;
typedef pair<long long, int> pli;
int main() {
  ifstream fin("input.txt");
  ofstream fout("output.txt");
  int N; fin >> N;
  vector<int> V(N);
  priority_queue<pli, vector<pli>, greater<pli>> PQ;
  for(int i = 0; i < N; i++) {
    fin >> V[i];
    PQ.push({V[i], i});
  }
  long long total_sum = accumulate(V.begin(), V.end(), 0);
  
  int res = 0;
  
  while(total_sum <= 0){
    res++;
    int pos = PQ.top().second;
    PQ.pop();
    total_sum += abs(V[pos])*2;
  }
  fout << res;
}