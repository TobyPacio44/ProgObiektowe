#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <time.h>
#include "prog.h"

int main(void) {
	int liczbaSamochodow = 10;

	srand((unsigned int)time(NULL));

	Samochod *samochody = malloc(liczbaSamochodow * sizeof(*samochody));

	if (samochody == NULL)
		return;

	FillTable(samochody, liczbaSamochodow);
	PrintTable(samochody, liczbaSamochodow);

	free(samochody);
	return 0;
}

void FillTable(Samochod *cars, int carAmount) {
	for (int i = 0; i < carAmount; i++) {
		cars[i].wheelAmount = rand() % 3 + 4; //4-6
		cars[i].doorAmount = rand() % 4 + 2; //2-5
		cars[i].abs = rand() % 2;
	}
}

void PrintTable(Samochod *cars, int carAmount) {
	for (int i = 0; i < carAmount; i++) {
		printf("Samochod %d: kola=%d, drzwi=%d, ABS=%s\n",
			i + 1,
			cars[i].wheelAmount,
			cars[i].doorAmount,
			cars[i].abs ? "tak" : "nie");
	}
}