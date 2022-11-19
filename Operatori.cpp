//#include<iostream>
//#include<string>
//using namespace std;
//
//
//class Laptop {
//	static int nrLaptopuri;
//	const int id;
//	int RAM;
//	string tipCPU;
//	float rezolutieEcran;
//	bool cameraWeb;
//	int nrTaste;
//	int* nrApasariTasta;
//
//public:
//
//	Laptop operator=(const Laptop &laptop) {
//		this->RAM = laptop.RAM;
//		this->tipCPU = laptop.tipCPU;
//		this->rezolutieEcran = laptop.rezolutieEcran;
//		this->cameraWeb = laptop.cameraWeb;
//		this->nrTaste = laptop.nrTaste;
//		if (this->nrApasariTasta != NULL) {
//			delete[]nrApasariTasta;
//		}
//		this->nrApasariTasta = new int[this->nrTaste];
//		for (int i = 0; i < this->nrTaste; i++) {
//			this->nrApasariTasta[i] = laptop.nrApasariTasta[i];
//		}
//
//		return *this;
//	}
//
//
//
//	int getID()const {
//		return id;
//	}
//	int getRAM() {
//		return RAM;
//	}
//	string getTipCPU() {
//		return tipCPU;
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
//	void setCameraWeb(bool cameraWeb) {
//		this->cameraWeb = cameraWeb;
//	}
//
//	~Laptop() {
//		//dezalocari din HEAP
//	}
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
//	int getNrApasariTastaByIndex(int index) {
//		if (index >= 0 && index < nrTaste) {
//			return nrApasariTasta[index];
//		}
//	}
//
//	void seNrApasariTasta(int* vector, int dim) {
//		if (dim > 0 && vector != NULL) {
//			if (this->nrApasariTasta != NULL) {
//				delete[]nrApasariTasta;
//			}
//			nrApasariTasta = new int[dim];
//			for (int i = 0; i < dim; i++) {
//				nrApasariTasta[i] = vector[i];
//			}
//			nrTaste = dim;
//		}
//	}
//
//	Laptop() :id(0) {
//		RAM = 16;
//		tipCPU = "AMD";
//		rezolutieEcran = 13.3;
//		this->cameraWeb = true;
//		this->nrLaptopuri++;
//		nrTaste = 0;
//		nrApasariTasta = NULL;
//	}
//
//	Laptop(int RAM, string tipCPU, float rezolutie, bool camera) :id(0) {
//		this->RAM = RAM;
//		this->tipCPU = tipCPU;
//		this->rezolutieEcran = rezolutie;
//		this->cameraWeb = camera;
//	}
//
//	Laptop(int RAM, string tipCPU, float rezolutie, bool camera, int nrTaste, int*nrApasariTaste) :id(0) {
//		this->RAM = RAM;
//		this->tipCPU = tipCPU;
//		this->rezolutieEcran = rezolutie;
//		this->cameraWeb = camera;
//		this->nrTaste = nrTaste;
//		this->nrApasariTasta = new int[nrTaste];
//		for (int i = 0; i < nrTaste; i++) {
//			this->nrApasariTasta[i] = nrApasariTaste[i];
//		}
//	}
//
//	Laptop(int RAM, float rezolutie, bool camera) :id(0) {
//		this->RAM = RAM;
//		this->tipCPU = "Intel";
//		this->rezolutieEcran = rezolutie;
//		this->cameraWeb = camera;
//	}
//
//	Laptop(const Laptop& laptop):id(laptop.id) {
//		this->RAM = laptop.RAM;
//		this->tipCPU = laptop.tipCPU;
//		this->rezolutieEcran = laptop.rezolutieEcran;
//		this->cameraWeb = laptop.cameraWeb;
//		this->nrTaste = laptop.nrTaste;
//		if (this->nrApasariTasta != NULL) {
//			delete[]nrApasariTasta;
//		}
//		this->nrApasariTasta = new int[this->nrTaste];
//		for (int i = 0; i < this->nrTaste; i++) {
//			this->nrApasariTasta[i] = laptop.nrApasariTasta[i];
//		}
//
//	}
//
//
//	Laptop operator+(int valoare) {
//		Laptop aux = *this;
//		aux.RAM = this->RAM + valoare;
//		return aux;
//	}
//	friend Laptop operator+ (int valoare, Laptop laptop) {
//		Laptop aux = laptop;
//		aux.RAM = laptop.RAM + valoare;
//		return aux;
//	}
//
//	//a=b+c;
//
//	Laptop operator+(const Laptop& l)const {
//		Laptop aux = *this;
//		aux.RAM = this->RAM + l.RAM;
//
//		return aux;
//	}
//
//	//a+=b;
//	Laptop operator+=(const Laptop& laptop) {
//		this->RAM += laptop.RAM;
//		return *this;
//	}
//
//
//	friend ostream& operator<<(ostream& oStream,const Laptop& laptop) {
//		oStream << laptop.id << " " << laptop.RAM << " " << laptop.tipCPU << " ";
//		oStream << laptop.nrTaste << " " << laptop.rezolutieEcran << " cu numarul de apasari:";
//		for (int i = 0; i < laptop.nrTaste; i++) {
//			oStream << laptop.nrApasariTasta[i];
//		}
//		return oStream;
//	};
//	friend istream& operator>>(istream& iStream, Laptop& laptop) {
//		cout << "RAM:";
//		iStream >> laptop.RAM;
//		cout << "Tip CPU:";
//		iStream >> laptop.tipCPU;
//		cout << "Rezolutie:";
//		iStream >> laptop.rezolutieEcran;
//		cout << "Numar taste:";
//		iStream >> laptop.nrTaste;
//		if (laptop.nrApasariTasta != NULL) {
//			delete[]laptop.nrApasariTasta;
//		}
//		laptop.nrApasariTasta = new int[laptop.nrTaste];
//		for (int i = 0; i < laptop.nrTaste; i++) {
//			cout << "Numarul de apasari pntru tasta " << (i + 1) << ":";
//			iStream >> laptop.nrApasariTasta[i];
//		}
//		return iStream;
//	};
//
//	Laptop operator++() {
//		this->RAM=this->RAM+1;
//		return *this;
//	}
//
//	Laptop operator++(int) {
//		Laptop copie = *this;
//		this->RAM++;
//		return copie;
//	}
//
//
//	int& operator[](int index) {//index=9
//		if (index >= 0 && index < nrTaste) {
//			return nrApasariTasta[index];
//		}else{
//			return -1;
//		}
//	}
//
//
//	explicit operator int() {
//		return this->RAM;
//	}
//
//	Laptop operator! () {
//		Laptop copie = *this;
//		copie.cameraWeb = (!this->cameraWeb);
//		return copie;
//	}
//
//	//numarul total de apasari
//	int operator()() {
//		int suma = 0;
//		for (int i = 0; i < this->nrTaste; i++) {
//			suma += this->nrApasariTasta[i];
//		}
//		return suma;
//	}
//
//	//numarul de apasari pt primele n taste
//	int operator()(int n) {
//		if (n > 0 && n < this->nrTaste) {
//			int suma = 0;
//			for (int i = 0; i < n; i++) {
//				suma += this->nrApasariTasta[i];
//			}
//			return suma;
//		}
//		else {
//			return 0;
//		}
//	}
//
//	//numarul de apasari pt tastele dintr-un interval
//	int operator()(int start, int end) {
//		if (start > 0 && start < this->nrTaste && end <= this->nrTaste && start < end) {
//			int suma = 0;
//			for (int i = start-1; i < end; i++) {
//				suma += this->nrApasariTasta[i];
//			}
//			return suma;
//		}
//		else {
//			return 0;
//		}
//	}
//
//	Laptop* operator->() {
//		this->RAM = 1000;
//		return this;
//	}
//
//
//
//
//};
//
//int Laptop::nrLaptopuri = 0;
//
//
////ostream& operator<<(ostream& oStream, Laptop laptop) {
////	oStream << laptop.id << " " << laptop.RAM << " " << laptop.tipCPU<<" ";
////	oStream << laptop.nrTaste << " " << laptop.rezolutieEcran << " cu numarul de apasari:";
////	for (int i = 0; i < laptop.nrTaste; i++) {
////		oStream << laptop.nrApasariTasta[i];
////	}
////	return oStream;
////}
////istream& operator>>(istream& iStream, Laptop& laptop) {
////	cout << "RAM:";
////	iStream >> laptop.RAM;
////	cout << "Tip CPU:";
////	iStream >> laptop.tipCPU;
////	cout << "Rezolutie:";
////	iStream >> laptop.rezolutieEcran;
////	cout << "Numar taste:";
////	iStream >> laptop.nrTaste;
////	if (laptop.nrApasariTasta != NULL) {
////		delete[]laptop.nrApasariTasta;
////	}
////	laptop.nrApasariTasta = new int[laptop.nrTaste];
////	for (int i = 0; i < laptop.nrTaste; i++) {
////		cout << "Numarul de apasari pntru tasta " << (i + 1) << ":";
////		iStream >> laptop.nrApasariTasta[i];
////	}
////	return iStream;
////}
////
//
//
//
//void main() {
//	//Laptop laptop1;
//	//Laptop laptop2;
//	//Laptop laptop3;
//
//	////laptop3 = laptop1 + laptop2;
//	//laptop3 = laptop1 + 4;
//	//laptop3 = 4 + laptop2;
//	////int val = aptop + 4;
//	////etc
//
//	//Laptop laptop6;
//	////cin >> laptop6;
//	////cout << laptop6;
//
//
//
//
//	//laptop1.setRAM(16);
//	//laptop2 = laptop1++;
//	//laptop3 = ++laptop1;
//
//
//	//Laptop laptop9(10, "Intel", 13, true, 4, new int[4]{ 10,12,13,7 });
//	//cout << laptop9[0];
//
//	//laptop9[0] = 4;
//
//
//
//	////int memorieRAMImplicit = laptop9;
//	//int memorieRAMExplicit = (int)laptop9;
//
//
//	//Laptop laptop10(10, "Intel", 13, true, 4, new int[4]{ 10,12,13,7 });
//
//	//for (int i = 0; i < laptop10.getNrTaste(); i++) {
//	//	//cout << laptop10.getNrApasariTasta()[i] << ", ";
//	//	//cout << laptop10.getNrApasariTastaByIndex(i) << ", ";
//	//	cout << laptop10[i]<<", ";
//	//}
//
//	//cout << endl << "Vechea valoare:" << laptop10[1];
//	//laptop10[1] = 100;
//	//cout << endl << "Noua valoare:" << laptop10[1];
//
//	//int aRAM = laptop10;
//	//!laptop10;
//	//laptop10=(!laptop10); //!=
//
//	//cout << endl;
//	//cout << laptop10() << endl;
//	//cout << laptop10(2)<<endl;
//	//cout << laptop10(2, 4)<<endl;
//
//	//cout << endl << endl;
//	//
//	//
//
//	//l34.setRAM(1);
//	//cout << l34.getRAM()<<endl;
//	//cout << l34->getRAM()<<endl;
//	
//
//	//Laptop* pointer = new Laptop[10];
//	//int* p = new int[10];
//	//pointer[0]=l2;
//
//
//
//
//	/*Laptop l2;
//	Laptop l1;
//	cout << l1<<l2;
//
//	cin >> l1 >> l2;*/
//
//	//Laptop l3 = l1 + l2;
//	//int a=16;
//	//a %= 5;
//	//cout << a;
//
//
//	Laptop laptop10(10, "Intel", 13, true, 4, new int[4]{ 10,12,13,7 });
//
//	int capacitate = (int)laptop10;
//
//	double a = 5.6;
//	int b = (float)a;
//
//	cout << sizeof(laptop10);
//
//	Laptop* v = new Laptop[3];
//
//	Laptop l56;
//	Laptop l57();
//
//}