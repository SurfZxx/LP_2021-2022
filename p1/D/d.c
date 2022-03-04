#include <stdio.h>
#include <string.h>

#define max_x 7
#define min_x -3
#define max_y 6
#define min_y -4
#define MAX_SIZE 100
 
struct Ships {
    int x;
    int y;
    char nome[MAX_SIZE];
};

int zona(int x, int y) {
    if (x <= max_x && x >= min_x) {
        if (y <= max_y && y >= min_y) {
            return 1;
        }
    }
    return 0;
}


void test(void) {
    int coord_x, coord_y;
    char nome_barco[MAX_SIZE];
    int nr_barcos = 0;
    int result;
    struct Ships Ship[MAX_SIZE];
    while (scanf("%d %d %s", &coord_x, &coord_y, nome_barco) != EOF) {
        
        result = zona(coord_x, coord_y);
        if (result == 1) {
            strcpy(Ship[nr_barcos++].nome, nome_barco);
        }
    }
    printf("%d", nr_barcos);
    for (int i = nr_barcos; i >= 0; i--) {
        printf("%s\n", Ship[i].nome);
    }
}

int main(int argc, char const *argv[]) {
    test();
    return 0;
}