// Punti: 100.0
#include <bits/stdc++.h>
using namespace std;
unordered_map<long long int, int>catalog;
// Declaring functions
void aggiungi(long long int id){
    if(catalog.count(id))
      catalog[id]++;
    else
      catalog[id] = 1;
}
void togli(long long int id){
    catalog[id]--;
}
int conta(long long int id){
    return catalog[id];
}