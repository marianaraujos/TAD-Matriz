typedef struct {
    int linha;
    int coluna;
    float *v;
}Matriz;

Matriz* criar(int m, int n);
void liberar (Matriz* mat);
float acessa(Matriz* mat, int i, int j);
void atribuir(Matriz* mat, int i, int j, float v);
int linhas(Matriz* mat);
int colunas(Matriz* mat);
int ehQuadradaSimetrica(Matriz* mat);