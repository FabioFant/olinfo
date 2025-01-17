// Punti: 100.0
#include <bits/stdc++.h>
using namespace std;
int main() {
  ifstream fin("input.txt");
  ofstream fout("output.txt");
  int N,H,V;
  fin >> N;
  int sumH = 0;
  int sumV = 0;
  int minH = 100001;
  int minV = 100001;
  for(int i = 0;i < (N*2); i++){
    if(i < N){ //Hamilton
      fin >> H;
      sumH += H;
      minH = min(minH , H);
    }
    else{ //Verstappen
      fin >> V;
      sumV += V;
      minV = min(minV , V);
    }
  }
  //Vincitore
  if(sumH < sumV) fout << "Hamilton" << "\n";
  else fout << "Verstappen" << "\n";
  //Fastest Lap
  if(minH < minV) fout << "Hamilton";
  else fout << "Verstappen";
  
}
