#pragma warning(disable:4996)


#include <stdio.h>      /* printf, scanf, NULL */
#include <stdlib.h>     /* calloc, exit, free */
#include <conio.h>

/*
    Source by CPlusPlus (https://www.cplusplus.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    int i, n;
    int* pData;

    printf("Jumlah angka yang akan dimasukkan : ");
    scanf("%d", &i);
    
    pData = (int*)calloc(i, sizeof(int));
    
    if (pData == NULL) {
        exit(1);
    }

    for (n = 0; n < i; n++) {
        printf("Masukkan nomor #%d: ", n + 1);
        scanf("%d", &pData[n]);
    }

    printf("\nKamu memasukkan : ");
    
    for (n = 0; n < i; n++) {
        printf("%d ", pData[n]);
    }

    free(pData);
    
    _getch();
    return 0;
}