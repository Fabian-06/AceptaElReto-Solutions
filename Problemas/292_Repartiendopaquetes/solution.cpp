#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;



struct Arista {
    int destino;
    int peso;
};

struct Distancia {
    int vertice;
    int distancia;

    Distancia(int v = 0, int d = 0) : vertice(v), distancia(d) {}

    bool operator<(const Distancia& o) const {
        return distancia > o.distancia;
    }
};

vector<Arista> adj[10001];
vector<Arista> adj_inv[10001];
int dist_ida[10001];
int dist_vuelta[10001];
bool visto[10001];

void dijkstra(int inicio, int n, const vector<Arista> grafo[], int distancias[]) {
    fill(distancias + 1, distancias + n + 1, __INT_MAX__);
    fill(visto + 1, visto + n + 1, false);

    priority_queue<Distancia> abiertos;
    abiertos.push(Distancia(inicio, 0));
    distancias[inicio] = 0;

    while (!abiertos.empty()) {
        Distancia u = abiertos.top();
        abiertos.pop();

        if (visto[u.vertice]) continue;
        visto[u.vertice] = true;

        //for (const Arista& e : grafo[u.vertice]) {
        for(int i = 0; i < grafo[u.vertice].size(); i++){
            Arista e = grafo[u.vertice][i];
            int v = e.destino;
            int w = e.peso;

            if (!visto[v]) {
                if (distancias[u.vertice] + w < distancias[v]) {
                    distancias[v] = distancias[u.vertice] + w;
                    abiertos.push(Distancia(v, distancias[v]));
                }
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, c, origen, destino, esfuerzo, oficina, p, casa,res;
    while (cin >> n >> c) {
        for (int i = 1; i <= n; i++) {
            adj[i].clear();
            adj_inv[i].clear();
        }

        for (int i = 0; i < c; ++i) {
            cin >> origen >> destino >> esfuerzo;
            adj[origen].push_back({destino, esfuerzo});
            adj_inv[destino].push_back({origen, esfuerzo});
        }

        cin >> oficina >> p;
        dijkstra(oficina, n, adj, dist_ida);
        dijkstra(oficina, n, adj_inv, dist_vuelta);

        bool imposible = false;
        res = 0;

        for (int i = 0; i < p; ++i) {
            int casa;
            cin >> casa;
            if (!imposible) {
                int d1 = dist_ida[casa];
                int d2 = dist_vuelta[casa];
                if (d1 == __INT_MAX__ || d2 == __INT_MAX__) {
                    imposible = true;
                } else {
                    res += d1 + d2;
                }
            }
        }

        if (imposible) {
            cout << "Imposible\n";
        } else {
            cout << res << "\n";
        }
    }

    return 0;
}