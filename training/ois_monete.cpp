// Punti: 100.0
#include <bits/stdc++.h>
using namespace std;
int main() {
  ifstream fin ("input.txt");
  ofstream fout ("output.txt");
//GRAFO BFS
  int n,m; fin>>n>>m;
  vector<int> v(n); //v contiene le monete
  for(int i = 0; i<n; i++){
    fin>>v[i];
  }
  //vettore di vettori, ogni casella ha un vettore con lunghezza indeterminata, ogni vettore rappresenta il nodo e al suo interno i collegamenti
  vector<vector<int>> g(n); //lista di adiacenza
  for(int i = 0; i<m; i++){
    int from, to; fin>>from>>to; //from: partenza; to: arrivo
    g[from].push_back(to); //per il nodo di partenza memorizza l'arrivo
    g[to].push_back(from); //faccio l'opposto perchè bidirezionale
  }
  int ans = 0; //monete
  queue<int> q; //lista dei nodi dove devo andare
  vector<bool> vis(n, false); //nodi da visitare (n: lunghezza, false: valore default)
  q.push(0); //inserisco 0, parto da quello
  vis[0] = true; //parto da 0, quindi lo ho visitato
  ans += v[0]; //aggiungo le monete di 0
  while(!q.empty()){ //Lo facciamo finchè la coda non è vuota
    int curr = q.front(); //prendo il primo valore nella lista
    q.pop(); //tolgo il valore all'inizio
    for(int a : g[curr]){ //for each: vado avanti basandomi alle caselle degli array, in questo caso prendo i valori all'interno del vettore del nodo. Per ex. se mi trovo in 0, passo per ogni nodo attaccato a 0
      if(!vis[a]){ //Se non lo ho visitato
        vis[a] = true; //Lo visito
        ans += v[a]; //Aggiungo le monete
        q.push(a); //Alla lista aggiungo il nodo visitato, in modo tale che dopo posso prendere quelli attaccati a lui
      }
    }
  }
    fout<<ans;
}
