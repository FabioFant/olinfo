// Punti: 100.0
#include <bits/stdc++.h>
using namespace std;
int main() {
  ifstream fin("input.txt");
  ofstream fout("output.txt");
  int N; fin >> N;
  vector<int> P(N);
  vector<int> sorted_P(N);
  vector<int> start_P(N);
  for(int i = 0; i < N; i++){
    fin >> P[i];
    sorted_P[i] = P[i];
    start_P[i] = P[i];
  }
  sort(sorted_P.begin(), sorted_P.end());
  int count = 0;
  while(true){
    //equal(P.begin(), P.end(), sorted_P.begin(), sorted_P.end())
    if(P == sorted_P){
      break;
    }
    P.insert(P.begin(), P[N-1]);
    P.pop_back();
    count++;
    //equal(P.begin(), P.end(), start_P.begin(), start_P.end())
    if(P == start_P){
      count = -1;
      break;
    }
  }
  fout << count;
  
  return 0;
}