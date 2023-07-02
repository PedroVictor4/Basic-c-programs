#include <stdio.h>
#include <stdlib.h>

#define MAX_N 200005
#define MAX_K 200005

typedef struct {
    int v;  // vértice adjacente
    int nxt;  // próxima aresta da lista
} Edge;

Edge edges[MAX_K * 2];
int head[MAX_K + 1];
int nxt_edge = 0;

// insere uma aresta no grafo
void insert_edge(int u, int v) {
    edges[nxt_edge].v = v;
    edges[nxt_edge].nxt = head[u];
    head[u] = nxt_edge++;
}

// faz uma busca em profundidade a partir do vértice u, marcando os vértices visitados
void dfs(int u, int parent, int *visited) {
    visited[u] = 1;
    for (int i = head[u]; i != -1; i = edges[i].nxt) {
        int v = edges[i].v;
        if (v != parent && !visited[v]) {
            dfs(v, u, visited);
        }
    }
}

// verifica se os grafos formados pelos vértices u e v são isomorfos
int isomorphic(int u, int v, int *visited) {
    // faz uma busca em profundidade a partir do vértice u e vê quais vértices foram visitados
    int visited_u[MAX_K + 1] = {0};
    int visited_v[MAX_K + 1] = {0};
    dfs(u, -1, visited_u);
    dfs(v, -1, visited_v);

    // verifica se o número de vértices visitados é o mesmo nos dois grafos
    int cnt_u = 0, cnt_v = 0;
    for (int i = 1; i <= visited[0]; i++) {
        if (visited_u[i]) cnt_u++;
        if (visited_v[i]) cnt_v++;
    }
    if (cnt_u != cnt_v) return 0;

    // verifica se os graus dos vértices são os mesmos nos dois grafos
    int degree_u[MAX_K + 1] = {0};
    int degree_v[MAX_K + 1] = {0};
    for (int i = head[u]; i != -1; i = edges[i].nxt) {
        int v = edges[i].v;
        degree_u[v]++;
    }
    for (int i = head[v]; i != -1; i = edges[i].nxt) {
        int u = edges[i].v;
        degree_v[u]++;
    }
    for (int i = 1; i <= visited[0]; i++) {
        if (visited_u[i] && degree_u[i] != degree_v[i]) return 0;
    }

    // verifica se o grafo formado pelos vértices visitados é conexo nos dois grafos
    int cnt_components_u = 0, cnt_components_v = 0;
    for (int i = 1; i <= visited[0]; i++) {
        if (visited_u[i] && !visited[i]) cnt_components_u++;
        if (visited_v[i] && !visited[i]) cnt_components_v++;
    }
    if (cnt_components_u != cnt_components_v) return 0;

    return 1;
}

int main() {
    int n;
    scanf("%d", &n);

    // lê as árvores
    int trees[MAX_N][MAX_K];
    int sizes[MAX_N];
}