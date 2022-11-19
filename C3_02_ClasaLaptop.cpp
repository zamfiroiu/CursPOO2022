//#include<iostream>
//using namespace std;
//
//class Laptop {
//private:
//	static int nrLaptopuri;
//	const int id;
//
//	int RAM;
//	string tipCPU;
//	float rezolutieEcran;
//	bool cameraWeb;
//	int nrTaste;
//	int* nrApasariTasta;
//
//public:
//
//	static int TVA;
//
//
//	int getID() { //int getID(Laptop* this)
//		return id;
//	}
//	int getRAM() {//int getRAM(Laptop* this)
//		return RAM;
//	}
//	string getTipCPU() {//string getTipCPU(Laptop* this)
//		return tipCPU; //return this->tipCPU;
//	}
//	float getRezolutieEcran() {
//		return rezolutieEcran;
//	}
//	bool hasCameraWeb() {
//		return cameraWeb;
//	}
//
//	void setRAM(int RAM) {
//		if (RAM > 0) {
//			this->RAM = RAM;
//		}
//	}
//
//	void setTipCPU(string tipCPU) {
//		if (tipCPU.length() > 0) {
//			this->tipCPU = tipCPU;
//		}
//	}
//
//	void setRezolutieEcran(float rezolutieEcran) {
//		if (rezolutieEcran > 10) {
//			this->rezolutieEcran = rezolutieEcran;
//		}
//	}
//
//	void setCameraWeb(bool cameraWeb) {//setCameraWeb(Laptop* this, bool cameraWeb)
//		this->cameraWeb = cameraWeb;
//	}
//
//	///void main
//	//Laptop p;
//	//p.setCameraWeb(true);
//
//	//~Laptop() {
//	//	//nrLaptopuri--;
//	//	if (this->nrApasariTasta != NULL) {
//	//		delete[]nrApasariTasta;
//	//	}
//	//}
//
//	int getNrTaste() {
//		return nrTaste;
//	}
//
//	void setNrTaste(int nr) {
//		nrTaste = nr;
//	}
//
//	int* getNrApasariTasta() {
//		return nrApasariTasta;
//	}
//
//	void setNrApasariTasta(int* vector, int dim) {
//		if (dim > 0 && vector != NULL) {
//			if (this->nrApasariTasta != NULL) {
//				delete[]this->nrApasariTasta;
//			}
//			nrApasariTasta = new int[dim];
//			for (int i = 0; i < dim; i++) {
//				this->nrApasariTasta[i] = vector[i];
//			}
//			nrTaste = dim;
//		}
//	}
//
//	void setNrApasariTastaPrecizata(int index, int noulNumar) {
//		if (index >= 0 && index < this->nrTaste) {
//			if (noulNumar > 0) {
//				nrApasariTasta[index] = noulNumar;
//			}
//		}
//	}
//
//private:
//
//public:
//	Laptop() :id(nrLaptopuri) {
//		RAM = 16;
//		tipCPU = "AMD";
//		rezolutieEcran = 13.3;
//		this->cameraWeb = true;
//		nrLaptopuri++;
//		nrTaste = 0;
//		nrApasariTasta = NULL;
//	}
//	Laptop(const Laptop& l):id(nrLaptopuri++) {
//		this->setRAM(l.RAM);
//		this->tipCPU = l.tipCPU;
//		this->rezolutieEcran = l.rezolutieEcran;
//		this->cameraWeb = l.cameraWeb;
//		//this->nrTaste = l.nrTaste;
//		//this->nrApasariTasta = new int[l.nrTaste];
//		//for (int i = 0; i < l.nrTaste; i++) {
//		//	this->nrApasariTasta[i] = l.nrApasariTasta[i];
//		//}
//		this->setNrApasariTasta(l.nrApasariTasta, l.nrTaste);
//	}
//
//	Laptop operator=(const Laptop& l) {
//		if (this != &l) 
//		{
//			this->RAM = l.RAM;
//			this->tipCPU = l.tipCPU;
//			this->rezolutieEcran = l.rezolutieEcran;
//			this->cameraWeb = l.cameraWeb;
//			this->nrTaste = l.nrTaste;
//			if (this->nrApasariTasta != NULL) {
//				delete[]this->nrApasariTasta;
//			}
//			this->nrApasariTasta = new int[l.nrTaste];
//			for (int i = 0; i < l.nrTaste; i++) {
//				this->nrApasariTasta[i] = l.nrApasariTasta[i];
//
//			}
//		}
//		return *this;
//	}
//
//
//
//	~Laptop() {
//		if (this->nrApasariTasta != NULL) {
//			delete[] this->nrApasariTasta;
//		}
//	}
//
//	//Laptop(int RAM, string tipCPU, float rezolutie, bool camera):id(0) {
//	//	this->RAM = RAM;
//	//	this->tipCPU = tipCPU;
//	//	this->rezolutieEcran = rezolutie;
//	//	this->cameraWeb = camera;
//	//}
//
//	Laptop(int RAM, float rezolutieEcran, bool camera):id(nrLaptopuri) {
//		this->RAM = RAM;
//		nrLaptopuri++;
//		this->tipCPU = "Intel";
//		this->rezolutieEcran = rezolutieEcran;
//		this->cameraWeb = camera;
//	}
//
//	Laptop(string tip, int RAM, float rezolutie,  bool camera) :id(nrLaptopuri) {
//		this->RAM = RAM;
//		nrLaptopuri++;
//		this->tipCPU = tip;
//		this->rezolutieEcran = rezolutie;
//		this->cameraWeb = camera;
//	}
//
//	//Laptop(int newRAM, float rezolutie, bool camera):RAM(newRAM),tipCPU("Intel"),
//	//												rezolutieEcran(rezolutie),
//	//												cameraWeb(camera) 
//	//{
//	//}
//
//	//Laptop(int RAM=12, string tipCPU="AMD", float rezolutie=15, bool camera=true):id(0) {
//	//	this->RAM = RAM;
//	//	this->tipCPU = tipCPU;
//	//	this->rezolutieEcran = rezolutie;
//	//	this->cameraWeb = camera;
//	//}
//
//
//
//	inline void modificaRAM(int RAM) {
//		this->RAM = RAM;
//	}
//
//	static int cateLaptopuri() {
//		//int v = this->RAM;
//		return nrLaptopuri;
//	}
//
//
//
//	void modificaTipCPU(string newTipCPU);
//
//	//Laptop() :id(999) {
//	//	this->RAM = 12;
//
//	//}
//	friend void functie(Laptop& laptop) {
//		cout << laptop.RAM << endl;
//	};
//	friend class Programator;
//};
//
//
////void functie(Laptop& l) {
////	cout << l.RAM << endl;
////
////}
//
//Laptop f2() {
//	Laptop l2;
//	return l2;
//}
//
//class Programator {
//
//};
//
//
//void Laptop::modificaTipCPU(string newTipCPU) {
//	this->tipCPU = newTipCPU;
//}
//
//int Laptop::nrLaptopuri = 0;
//int Laptop::TVA = 19;
//
//void main() {
//
//	//cout << Laptop::TVA;
//
//	//Laptop laptop3;
//	//cout << laptop3.TVA;
//
//	//cout << Laptop::cateLaptopuri() << endl;
//	//Laptop l1;//nrlaptopuri-101
//	//{
//	//	Laptop l2;//id-101 si nrLaptopuri - 102
//	//	cout << Laptop::cateLaptopuri() << endl;
//	//}//nrLaptopuri-101
//	//Laptop l3; //id=101
//	////cout << l1.getID() << " " << l2.getID()<<endl;
//	//cout << Laptop::cateLaptopuri() << endl;
//	////Laptop laptop;
//
//
//	//cout << "Numar laptopuri:" << Laptop::cateLaptopuri() << endl;
//	//cout << "Numar laptopuri:" << l1.cateLaptopuri() << endl;
//
//	
//	//
//	//{
//	//	Laptop l;
//	//	l.modificaRAM(40);
//	//	l.cateLaptopuri();
//	//	//1
//	//}
//	////2	
//
//	//for (int i = 0; i < 5; i++) {
//	//	Laptop l3;
//	//	cout << i;
//	//}
//
//
//	//////Laptop l1(20, 13, true);
//	//////Laptop l2(10, 15, false);
//
//	////cout << Laptop::cateLaptopuri();
//
//	////Laptop l;
//	////l.seNrApasariTasta(new int[4]{ 10,2,5,7 }, 4);
//	////cout<<l.getNrApasariTasta()[3];
//
//	//Laptop l;
//	//Laptop l2(16);
//	//Laptop l2(16,"INTEL");
//
//	//Laptop l1;
//	//Laptop l11;
//	//l1.getRAM();
//
//	//Laptop l2(24, 20, true);
//	//
//	//Laptop l3("AMD", 24,20, true);
//	//l3.getRAM();
//	//l3.getRAM();
//
//
//
//	//Laptop::cateLaptopuri();
//
//
//
//
//	/*Laptop laptop1;
//	functie(laptop1);
//	f2();
//
//	laptop1.setNrApasariTasta(new int[3] {10, 15, 20}, 3);
//
//	cout << laptop1.getNrApasariTasta()[0]<<endl;
//
//	laptop1 = laptop1;
//
//	cout << laptop1.getNrApasariTasta()[0];
//
//	Laptop laptop2;
//
//	Laptop laptop3;
//	laptop1 = laptop2 = laptop3;*/
//
//	//cout << laptop1.getRAM() << endl;
//	//laptop1.setRAM("gfdgfd");
//	//cout << laptop1.getRAM() << endl;
//
//	//laptop1.setNrApasariTasta(new int[3] {10, 15, 20}, 3);
//	//Laptop laptop2;
//
//	//laptop1.setNrApasariTastaPrecizata(0, 80);
//	//cout << laptop2.getNrApasariTasta()[0];
//
//	//Laptop laptop2;
//
//
//	Laptop l1;
//	Laptop l2 = l1;
//
//}
