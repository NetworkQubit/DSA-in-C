#include<stdio.h>

#define SIZE 20

int adj[SIZE][SIZE];
int visited[SIZE];
int queue[SIZE];
int f = 0, r = -1;

void BFS(int start, int n){
    visited[start] = 1;
    queue[++r] = start;
    while (f <= r){
        int current = queue[f++];
        printf("%d ", current);
        for (int i = 0; i < n; i++){
            if (adj[current][i] == 1 && visited[i] == 0){
                visited[i] = 1;
                queue[++r] = i;
            }
        }
    }
}

int main(){
    int start, n;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    printf("Enter the adjacency matrix: ");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &adj[i][j]);
        }
    }

    printf("Enter starting vertex: ");
    scanf("%d", &start);

    BFS(start,n);
}