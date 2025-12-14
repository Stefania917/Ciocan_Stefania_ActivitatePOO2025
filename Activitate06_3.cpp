#include<iostream>

using namespace std;

class Autocar {
private:
	float nrKm = 0;
public:
	Autocar() {}

	Autocar(float nrKm) :nrKm(nrKm) {}

	float getNrKm() {
		return this->nrKm;
	}
};

class Autobaza {
private:
	//1:1
	//Autocar autocar;

	//1:m
	Autocar* vector;
	int nrAutocare;
	string denumire;

public:
	Autobaza(string denumire, int nrAutocare, float* vectorNrKm) {
		this->denumire = denumire;
		this->nrAutocare = nrAutocare;
		this->vector = new Autocar[nrAutocare];
		for (int i = 0; i < nrAutocare; i++)
		{
			this->vector[i] = Autocar(vectorNrKm[i]);
		}
	}

	Autobaza(const Autobaza& a) {
		this->denumire = a.denumire;
		this->nrAutocare = a.nrAutocare;
		if (a.vector != nullptr) {
			this->vector = new Autocar[a.nrAutocare];
			for (int i = 0; i < a.nrAutocare; i++)
			{
				this->vector[i] = a.vector[i];
			}
		}
		else {
			this->vector = nullptr;
		}
	}

	Autocar& operator[](int index) {
		if (index >= 0 && index < this->nrAutocare) {
			return this->vector[index];
		}
		else {
			throw "Index ul este in afara intervalului!";
		}
	}
};

int main() {
	float* vectorNrKm = new float[2] {150000, 750000};
	Autobaza a1("Giulesti", 2, vectorNrKm);

	cout << endl << "Nr km pentru al doilea autocar: " << a1[1].getNrKm();

	Autobaza a2 = a1;
	Autobaza a2(a1);
	cout << endl << "Nr km pentru al doilea autocar: " << a2[1].getNrKm();
}