// Punti: 100.0
#include <bits/stdc++.h>

using namespace std;

int tempo_massimo(int N, int* A, int* B){
    vector<int>memo(N+2, 0);

    for(int i = 0; i < N+2; i++){
        if(i > 1){
            memo[i] = max(A[i-2] + memo[i-1], B[i-2] + memo[i-2]);
        }
    }

    return memo[N+1];
}