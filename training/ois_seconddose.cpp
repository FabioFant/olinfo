// Punti: 100.0
#include <bits/stdc++.h>
using namespace std;
int main() {
  ifstream fin("input.txt");
  ofstream fout("output.txt");
  int n1,n2;
  fin >> n1;
  fin >> n2;
  int dose1[n1];
  
  for(int i = 0; i < n1; i++){
    fin >> dose1[i];
  }
  sort(dose1, dose1 + n1);
  int dose2[n2];
  
  for(int i = 0; i < n2; i++){
    fin >> dose2[i];
  }
  sort(dose2, dose2 + n2);
  int count = 0;
  int sx = 0;
  int dx = n1-1;
  
  for(int i = 0; i < n2; i++){
    while(sx <= dx){
      int mezzo = (dx + sx)/2;
      
      if(dose2[i] < dose1[mezzo])
      {
        dx = mezzo-1;
      }
      else if(dose2[i] > dose1[mezzo])
      {
        sx = mezzo+1;
      }
      else
      {
        count++;
        break;
      }
    }
    sx = 0;
    dx = n1-1;
  }
  fout << count;
  
}
