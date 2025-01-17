// Punti: 100.0
#include <bits/stdc++.h>
using namespace std;
int main() {
  ifstream fin("input.txt");
  ofstream fout("output.txt");
  int R, C;
  fin >> R >> C;
  vector<vector<int>> map(R, vector<int>(C));
  vector<vector<bool>> visited(R, vector<bool>(C, false));
  int res = 0;
  for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++) {
      fin >> map[i][j];
    }
  }
  for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++) {
      if (map[i][j] == 1 && !visited[i][j]) {
        bool approved = true;
        stack<pair<int, int>> s;
        s.push({i, j});
        while (!s.empty()) {
          auto temp = s.top();
          int r = temp.first;
          int c = temp.second;
          s.pop();
          if (visited[r][c])
            continue;
          visited[r][c] = true;
          if (r == 0 || r == R - 1 || c == 0 || c == C - 1) {
            approved = false;
          }
          // ALTO
          if (r - 1 >= 0 && map[r - 1][c] == 1) {
            s.push({r - 1, c});
          }
          // BASSO
          if (r + 1 < R && map[r + 1][c] == 1) {
            s.push({r + 1, c});
          }
          // DESTRA
          if (c - 1 >= 0 && map[r][c - 1] == 1) {
            s.push({r, c - 1});
          }
          // SINISTRA
          if (c + 1 < C && map[r][c + 1] == 1) {
            s.push({r, c + 1});
          }
        }
        if (approved) {
          res++;
        }
      }
    }
  }
  fout << res << endl;
  return 0;
}
