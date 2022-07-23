#include <stdio.h>
#include <string.h>

/**
 * @brief Função que le n valores e coloca no vetor n
 * 
 * @param p vetor
 * @param n tamanho do vetor
 */
void le_intn(int * p, int n);

/**
 * @brief função que mostra os valores de um vetor
 * 
 * @param p vetor
 * @param n tamanho do vetor
 */
void mostra_intn(int * p, int n);

/**
 * @brief Função que seta os valores de um vetor para um caracter
 * 
 * @param m endereço do vetor
 * @param c caracter para setar
 * @param n tamanho do vetor
 * @return void* 
 */
void * memset2(void * m, unsigned char c, int n);

/**
 * @brief Função que concatena duas strings
 * 
 * @param st1 String que recebe o valor 
 * @param str2 String que será concatenada na str1
 */
void str_cat (char * st1, char * str2);

/**
 * @brief Função que retorna os números de vogais de uma string
 * 
 * @param str string a ser contada as vogais
 * @param f vetor que receberá os valores das vogais
 */
void frec_vogais (char * str, int * f);


/**
 * @brief Função que ordena um vetor em ordem crescente
 * 
 * @param v vetor a ser ordenado
 * @param n tamanho do vetor
 */
void selection_sort(int * v, int n);

int main() {
    
    return 0;
}

void selection_sort(int * v, int n) {
    int i, c, pm, t;
    for (i = 0; i < n-1; i++) {
        pm = i;
        for (c = i + 1; c < n; c++) if (v[c] < v[pm]) pm = c;
        
        t = v[i];
        v[i] = v[pm];
        v[pm] = t;
    }
}

void str_cat (char * str1, char * str2) {
    int i = 0, c = 0;

    while (str1[i] != '\0') i++;
    while (str2[c] != '\0') {
        str1[c + i] = str2[c];
        c++;
    }
    str1[c + i] = '\0';
}

void frec_vogais (char * str, int * f) {
    int i = 0;

    memset2(f, 0, 5*sizeof(int));

    while (str[i] != '\0') {
        if (str[i] == 'a' || str[i] == 'A') f[0]++;
        else if (str[i] == 'e' || str[i] == 'E') f[1]++;
        else if (str[i] == 'i' || str[i] == 'I') f[2]++;
        else if (str[i] == 'o' || str[i] == 'O') f[3]++;
        else if (str[i] == 'u' || str[i] == 'U') f[4]++;
        i++;
    }
}

void * memset2 (void * m, unsigned char c, int n) {
    unsigned char * p = (unsigned char *) m;
    int i;

    for (i = 0; i < n; i++) {
        *p = c;
        p++;
    }

    return m;
}

void le_intn(int * p, int n) {
    int i;
    for (i = 0; i < n; i++) scanf("%d", &p[i]);
}

void mostra_intn(int * p, int n) {
    int i;
    for (i = 0; i < n; i++) printf("%d ", p[i]);
}