// Punti: 100.0
#include <bits/stdc++.h>

using namespace std;
// Declaring functions
int quadri(int N, long long M, int* V){
    
    int sx = 0;
    long long sum = 0;
    int tempB = 0;
    long long tempSum = 0;

    if(*max_element(V, V + N) > M) return 0;

    for(int dx = 0; dx < N; dx++){
        sum += V[dx];

        while(sum > M && sx <= dx){
            sum -= V[sx];
            sx++;
        }
        if(sum > tempSum && sum <= M){
            tempB = dx - sx + 1;
            tempSum = sum;
        }
        else if(sum == tempSum && dx - sx + 1 > tempB && sum <= M){
            tempB = dx - sx + 1;
            tempSum = sum;
        }
    }

    return tempB;
}
