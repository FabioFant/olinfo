// Punti: 100.0
#include <bits/stdc++.h>
using namespace std;
set<long long> A;
void inizia() {}
void apri(long long p) { A.insert(p); }
void chiudi(long long p) { A.erase(p); }
long long chiedi(long long p) {
  // Se ce un autogrill in p ritorno p
  if (A.count(p)) {
    return p;
   }
  auto L_it = A.lower_bound(p);
  auto U_it = A.upper_bound(p);
  // Autogrill dopo
  if (L_it == A.begin() && U_it != A.end()) {
    return static_cast<long long>(*U_it);
  }
  // Autogrill prima
  else if (L_it != A.begin() && U_it == A.end()) {
    --L_it;
    return static_cast<long long>(*L_it);
  }
  // Autogril prima e dopo
  else if (L_it != A.begin() && U_it != A.end()) {
    --L_it;
    long long U = abs(static_cast<long long>(*U_it) - p);
    long long L = abs(static_cast<long long>(*L_it) - p);
    // Distanze uguali --> U
    if (U > L) {
      return static_cast<long long>(*L_it);
    } else if (U < L) {
      return static_cast<long long>(*U_it);
    }
    return static_cast<long long>(*U_it);
  }
  return -1;
}