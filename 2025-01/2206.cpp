#include <queue>
#include <vector>
#include <cstdlib>
#include <iostream>

typedef struct pos pos;
struct pos
{
  int i;
  int j;
  int v;
};

int n;
int m;

int di[4] = {-1, 0, 1,  0};
int dj[4] = { 0, 1, 0, -1};

int valid(int i, int j, int visit) {
  if(i < 0 || i >= n) return 0;
  if(j < 0 || j >= m) return 0;
  return (visit == 0);
}

int main()
{
  std::cin >> n;
  std::cin >> m;

  int g[n][m];
  int v[2][n][m];

  std::queue<pos> q;

  std::string in_str;
  for(int i = 0; i < n; i++) {
    std::cin >> in_str;
    for(int j = 0; j < m; j++) {
      g[i][j]    = (in_str[j] - '0');
      v[0][i][j] = 0;
      v[1][i][j] = 0;
    }
  }

  q.push({0, 0, 0});
  v[0][0][0] = 1;

  while(!q.empty()) {
    pos p0 = q.front();
    int i0 = p0.i;
    int j0 = p0.j;
    int v0 = p0.v;

    q.pop();

    if(i0 == n-1 && j0 == m-1) {
      std::cout << v[v0][i0][j0] << "\n";
      return 0;
    }

    for(int l = 0; l < 4; l++) {
      int i = i0 + di[l];
      int j = j0 + dj[l];

      if(!valid(i, j, v[v0][i][j])) continue;

      if(g[i][j] == 0) {
        v[v0][i][j] = v[v0][i0][j0] + 1;
        q.push({i, j, v0});
      }
      if(g[i][j] == 1 && v0 == 0) {
        v[1][i][j] = v[v0][i0][j0] + 1;
        q.push({i, j, 1});
      }
    }
  }

  std::cout << "-1\n";

  return 0;
}