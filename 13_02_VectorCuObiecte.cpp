//#include<iostream>
//#include<vector>
//#include<list>
//#include<deque>
//using namespace std;
//
//class Laptop {
//	int RAM;
//	char* tipCPU;
//	float rezolutieEcran;
//	bool cameraWeb;
//public:
//	int getRAM() {
//		return RAM;
//	}
//	char* getTipCPU() {
//		return tipCPU;
//	}
//	float getRezolutieEcran() {
//		return rezolutieEcran;
//	}
//	bool hasCameraWeb() {
//		return cameraWeb;
//	}
//	void setRAM(int RAM) {
//		if (RAM > 0) {
//			this->RAM = RAM;
//		}
//	}
//	
//	void setTipCPU(const char* tipCPU) {
//		if (strlen(tipCPU) > 0) {
//			if (this->tipCPU != NULL) {
//				delete[]this->tipCPU;
//			}
//			this->tipCPU = new char[strlen(tipCPU)+1];
//			strcpy(this->tipCPU, tipCPU);
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
//	Laptop() {
//		RAM = 16;
//		tipCPU = new char[strlen("AMD")+1];
//		strcpy(tipCPU, "AMD");
//		rezolutieEcran = 13.3;
//		this->cameraWeb = true;
//	}
//	
//	Laptop(int RAM, const char* tipCPU, float rezolutie, bool camera) {
//		this->RAM = RAM;
//		this->tipCPU = new char[strlen(tipCPU) + 1];
//		strcpy(this->tipCPU, tipCPU);
//		this->rezolutieEcran = rezolutie;
//		this->cameraWeb = camera;
//	}
//
//	Laptop(const Laptop& l) {
//		this->RAM = l.RAM;
//		this->tipCPU = new char[strlen(l.tipCPU) + 1];
//		strcpy(this->tipCPU, l.tipCPU);
//		this->rezolutieEcran = l.rezolutieEcran;
//		this->cameraWeb = l.cameraWeb;
//	}
//
//	Laptop& operator=(const Laptop& l) {
//		this->RAM = l.RAM;
//		if (this->tipCPU != NULL) {
//			delete[]this->tipCPU;
//		}
//		this->tipCPU = new char[strlen(l.tipCPU) + 1];
//		strcpy(this->tipCPU, l.tipCPU);
//		this->rezolutieEcran = l.rezolutieEcran;
//		this->cameraWeb = l.cameraWeb;
//		return *this;
//	}
//
//	virtual ~Laptop() {
//		if (this->tipCPU != NULL) {
//			delete[]this->tipCPU;
//		}
//	}
//	friend ostream& operator<<(ostream& console, Laptop laptop) {
//		console << laptop.RAM << " " << laptop.tipCPU << " ";
//		console << laptop.rezolutieEcran << " " << laptop.cameraWeb << endl;
//		return console;
//	};	
//};
//
//void main() {
//
//	vector<Laptop> laptopuri;	
//	laptopuri.push_back(Laptop(20,"INTEL",13,true));
//	laptopuri.push_back(Laptop(16, "AMD", 17, false));
//	for (int i = 0; i < laptopuri.size(); i++) {
//		cout << laptopuri[i]<<" ";
//	}
//
//	list <Laptop> lista;
//	lista.push_back(Laptop(20, "INTEL", 13, true));
//	lista.push_back(Laptop(16, "AMD", 17, false));
//
//
//	deque<Laptop> d;
//	d.push_back(Laptop(20, "INTEL", 13, true));
//	d.push_back(Laptop(16, "AMD", 17, false));
//	for (int i = 0; i < d.size(); i++) {
//		cout << d[i] << " ";
//	}
//}