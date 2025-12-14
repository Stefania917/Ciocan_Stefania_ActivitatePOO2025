#include<iostream>
#include<string>

using namespace std;

class ExceptieCustom : public exception {
public:
	ExceptieCustom(const char* mesaj) :exception(mesaj) {}
};

class Laptop
{
private:
	int memorie;
	string marca;
	float pret;
	static const float PRET_MINIM;
public:
	Laptop() {
		this->memorie = 0;
		this->marca = "Nedefinita";
		this->pret = 0;
	}

	Laptop(int memorie, string marca, float pret) {
		this->memorie = memorie;
		this->marca = marca;
		if (pret < PRET_MINIM) {
			throw ExceptieCustom("Pretul este prea mic!");
		}
		else {
			this->pret = pret;
		}
	}

	void afisare() {
		cout << endl;
		cout << endl << "Memorie: " << this->memorie;
		cout << endl << "Marca: " << this->marca;
		cout << endl << "Pret: " << this->pret;
	}
};
const float Laptop::PRET_MINIM = 1;

class LaptopGaming : public Laptop {
private:
	string placaVideo;
public:
	LaptopGaming() :Laptop() {
		this->placaVideo = "Nedefinit";
	}

	LaptopGaming(int memorie, string marca, float pret, string placaVideo) :Laptop(memorie, marca, pret) {
		this->placaVideo = placaVideo;
	}

	void afisare() {
		this->Laptop::afisare();
		cout << endl << "Placa video: " << this->placaVideo;
	}
};

int main() {
	try {
		Laptop lenovo(500, "Lenovo", 7000);
		lenovo.afisare();
	}
	catch (ExceptieCustom e) {
		cout << endl << e.what();
	}

	LaptopGaming laptopGaming(500, "Lenovo", 7000, "NVIDIA");
	laptopGaming.afisare();
}