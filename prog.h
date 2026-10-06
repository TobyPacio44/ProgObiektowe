typedef struct {
	int wheelAmount;
	int doorAmount;
	bool abs;

} Samochod;


void FillTable(Samochod *cars, int carAmount);

void PrintTable(Samochod *cars, int carAmount);