/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tassio
 *
 * Created on 27 de Março de 2017, 15:50
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int a[10];

void insertionSort(int *a) {

    int i, j, atual;

    for (i = 1; i <= 10; i++) {
        atual = a[i];
        j = i - 1;

        while ((j >= 0) && (atual < a[j])) {
            a[j + 1] = a[j];
            j = j - 1;
        }

        a[j + 1] = atual;
    }
}

int main(int argc, char** argv) {

    srand(time(NULL));
    for (int t = 1; t <= 10; t++) {
        a[t] = rand() % 10;
    }

    printf("Entrada = ");
    for (int t = 1; t <= 10; t++) {
        printf("%d ", a[t]);
    }

    printf("\nOdenação= ");
    insertionSort(a);

    for (int t = 1; t <= 10; t++) {
        printf("%d ", a[t]);
    }

    return (EXIT_SUCCESS);
}


