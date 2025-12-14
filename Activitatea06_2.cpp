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

	virtual void afisare() {
		cout << endl;
		cout << endl << "Memorie: " << this->memorie;
		cout << endl << "Marca: " << this->marca;
		cout << endl << "Pret: " << this->pret;
	}

	virtual string getPlacaVideo() = 0;
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

	string getPlacaVideo() {
		return this->placaVideo;
	}
};

int main() {
	Laptop* vectorLaptopuri[3];
	vectorLaptopuri[0] = new LaptopGaming(500, "Lenovo", 7000, "NVIDIA");
	vectorLaptopuri[1] = new LaptopGaming(250, "ASUS", 3500, "INTEL");
	vectorLaptopuri[2] = new LaptopGaming(1000, "Samsung", 6000, "NVIDIA");

	for (int i = 0; i < 3; i++)
	{
		vectorLaptopuri[i]->afisare();
		delete vectorLaptopuri[i];
	}
}