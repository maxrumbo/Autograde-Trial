// NIM - Name
// NIM - Name
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nama[100];
    int bobot;
    int nilai;
} KomponenPenilaian;

int main(int argc, char *argv[]) {
    if (argc != 2 || atoi(argv[1]) < 1 || atoi(argv[1]) > 5) {
        printf("Invalid argument\n");
        return 1;
    }

    int k = atoi(argv[1]);
    KomponenPenilaian komponen[k];

    for (int i = 0; i < k; i++) {
        printf("Enter the grades (name,bobot,nilai): ");
        scanf("%[^#]#%d#%d", komponen[i].nama, &komponen[i].bobot, &komponen[i].nilai);
    }

    for (int i = 0; i < k; i++) {
        printf("%s;%d;%d\n", komponen[i].nama, komponen[i].bobot, komponen[i].nilai);
    }

    float nilaiAkhir = 0;
    for (int i = 0; i < k; i++) {
        nilaiAkhir += (float)komponen[i].bobot * komponen[i].nilai / 100;
    }

    printf("%.1f\n", nilaiAkhir);

    if (nilaiAkhir >= 50.0) {
        printf("passed\n");
    } else {
        printf("failed\n");
    }

    return 0;
}