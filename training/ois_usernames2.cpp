// Punti: 100.0
#include <bits/stdc++.h>
using namespace std;
int main() {
  ifstream fin ("input.txt");
  ofstream fout ("output.txt");
  
  int N; string S;
  fin >> S >> N;
  unordered_map <string, int> M;
  for(int i = 0; i < N; i++){
    string s;
    fin >> s;
    M[s] = 0;
  }
  string key;
  for(int i = 0; i < N+1; i++){
    if(i != 0){
      if(M.find(S + to_string(i)) == M.end()){
        key = S + to_string(i);
        break;
      }
    }
    else{
      if(M.find(S) == M.end()){
        key = S;
        break;
      }
    }
  }
  fout << key;
  return 0;
}