// Punti: 100.0
#include <bits/stdc++.h>
using namespace std;
int main() {
  ifstream fin ("input.txt");
  ofstream fout ("output.txt");
  int N, P;
  int Si1, Si2, Si3;
  int sommaMassima = 0, sommaTemp, minimoPunti, puntiDavide, differenzaDiPunti;
  fin >> N >> P;
  fin >> Si1 >> Si2 >> Si3;
  puntiDavide = Si1 + Si2 + Si3;
  for(int i = 0; i < N-1; i++){
    //Sommare Punti di ognuno
    fin >> Si1 >> Si2 >> Si3;
    sommaTemp = Si1 + Si2 + Si3;
    //Trovare il massimo
    if(sommaTemp > sommaMassima){
      sommaMassima = sommaTemp;
    }
  }
  //Aumentare il massimo con P * 100
  sommaMassima = sommaMassima + (P * 100);
    //Fare la Differenza tra i nuovi punti max. nemici e quelli di Davide e aggiungere 1.
  differenzaDiPunti = sommaMassima - puntiDavide;
  if(differenzaDiPunti < 0){
    fout << 0;
  }else{
    fout << differenzaDiPunti+1;
  }
}