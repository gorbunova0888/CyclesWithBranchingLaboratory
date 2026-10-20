/*******************************
* Автор: Горбунова Настя       *
* Вариант: 5                   *
* Задание: Циклы с ветвлениями *
*******************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int cyclesCount;
	const double g = 9.81;
	double tG, tV, viscosity;

	cout << "Enter cyclesCount: "; cin >> cyclesCount;
	cout << "Enter tG: ";          cin >> tG;
	cout << "Enter tV: ";          cin >> tV;
	cout << "Enter viscosity: ";   cin >> viscosity;

	cout << "\nd    Gr    Nu" << endl;

	for (int loopIndex = 0; loopIndex < cyclesCount; ++loopIndex) {
		double diametr, Gr, Nu;

		cout << "Enter diametr: "; cin >> diametr;

		Gr = (g * pow(diametr, 3.0) / pow(viscosity, 2.0)) * ((tG - tV) / (tV + 273.0));

		if (Gr < pow(10.0, 9.0)) {
			Nu = 0.76 * pow(Gr, 0.22);
		}
		else {
			Nu = 0.15 * pow(Gr, 0.35);
		}

		cout << diametr << "    " << Gr << "    " << Nu << endl;
	}

	return 0;
}
