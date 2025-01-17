// Punti: 100.0
#include <bits/stdc++.h>
using namespace std;
int main() {
  ifstream fin ("input.txt");
  ofstream fout("output.txt");
  int n; cin>>n;
  map<int, int> dist;
  dist[n] = 0;
  queue<int> q;
  q.push(n);
  while(!q.empty()){
    int curr = q.front();
    q.pop();
    //+-1
    if(curr+1 <= 1e9){
      if(!dist.count(curr+1)){
        dist[curr+1] = dist[curr]+1;
        q.push(curr+1);
      } //count dice se c'è il valore nella mappa
    }
    if(curr-1 == 0){
      cout << dist[curr]+1;
      return 0;
    }
    else{
      if(!dist.count(curr-1)){
        dist[curr-1] = dist[curr]+1;
        q.push(curr-1);
      }
    }
    //*2
    if(curr*2 <= 1e9){
      if(!dist.count(curr*2)){
        dist[curr*2] = dist[curr]+1;
        q.push(curr*2);
      }
    }
    //3^k
    for(int i = 3; curr%i==0; i*=3){
      if(!dist.count(curr/i)){
        dist[curr/i] = dist[curr]+1;
        q.push(curr/i); 
      }
    }
  }
  assert(1);
}
