// Punti: 100.0
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N; cin >> N;
    
    int res = 0;
    vector<int> anim(N);
    for(int i = 0; i < N; i++)
        cin >> anim[i];
        
    int maxi = -1;
    for(int i = anim.size() - 1; i >= 0; i--)
        if (anim[i] >= maxi)
        {
            maxi = anim[i];
            res++;
        } 
        
    cout << res;
    return 0;
}