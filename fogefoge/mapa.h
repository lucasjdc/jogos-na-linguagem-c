struct mapa {
    char** matriz;
    int linhas;
    int colunas;
};

typedef struct mapa MAPA;

void liberamapa(MAPA* m);
void lemapa(MAPA* m);
void olocamapa(MAPA* m);
void imprimemapa(MAPA* m);