// Punti: 100.0
#include <bits/stdc++.h>

using namespace std;

long long int resolve(vector<int> vec, int siz){
    vector<int> tree(vec.size() + 1, 0);

    long long int risposta = 0;

    for(int i = vec.size() - 1; i >= 0; i--){
        // Query
        int index = vec[i] / 2;
        long long int sum = 0;
        while (index > 0){
            sum += tree[index];
            index -= index&-index;
        }
        risposta += sum;
        // Update
        index = vec[i] / 2 + 1;
        while (index < tree.size()){
            tree[index] += 1;
            index += index&-index;
        }
    } 

    return risposta;
}

// Declaring functions
long long int paletta_sort(int N, int* V){
    vector<int> pari;
    vector<int> dispari;
    bool f = true;
    for (int i = 0; i < N; i++) {
        if(f) pari.push_back(V[i]);
        else dispari.push_back(V[i]);

        f = !f;

        if (i % 2 == 0 && V[i] % 2 != 0) {
            return -1;
        } else if (i % 2 != 0 && V[i] % 2 == 0) {
            return -1;
        }
    }

    return resolve(pari, N) + resolve(dispari, N);
}