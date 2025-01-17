// Punti: 100.0
#include <bits/stdc++.h>

using namespace std;

int main()
{
  ifstream fin("input.txt");
  ofstream fout("output.txt");

  long long int N, t = 1, d = 1; // 2 3

  fin >> N;

  for(int i=0; i<N; i++)
  {
    int temp;
    fin >> temp;

    t *= temp; // t = t temp;
    d += t;
  }

  fout << d;

  return 0;
}