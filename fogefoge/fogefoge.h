void liberamapa();
void lemapa();
void olocamapa();

void move(char direcao);
int acabou();
void imprimemapa();

struct mapa {
    char** matriz;
    int linhas;
    int colunas;
};