#include<stdlib.h>
#include <stdbool.h>
#include <stdio.h>

typedef struct{
	int wheelAmount;
	int doorAmount;
	bool abs;

} Samochod;

int main(void) {
	int liczbaSamochodow = 10;

	srand((unsigned int)time(NULL));

	Samochod* samochody = malloc(liczbaSamochodow * sizeof(*samochody));

	if (samochody == NULL)
		return;

	for (int i = 0; i < liczbaSamochodow; i++) {
		samochody[i].wheelAmount = rand() % 3 + 4; //4-6
		samochody[i].doorAmount = rand() % 4 + 2; //2-5
		samochody[i].abs = rand() % 2;

		printf("Samochod %d: kola=%d, drzwi=%d, ABS=%s\n",
			i + 1,
			samochody[i].wheelAmount,
			samochody[i].doorAmount,
			samochody[i].abs ? "tak" : "nie");
	}


	free(samochody);
	return 0;
}