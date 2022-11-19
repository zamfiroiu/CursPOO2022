//#include<iostream>
//#include<fstream>
//
//using namespace std;
//
//void main() {
//
//	int numar = 2019;
//	fstream fisier("fisierBinar.txt", ios::out|ios::binary);
//	fisier.write((char*)&numar, sizeof(int));
//	fisier.close();
//
//
//	int numarCitit = 0;
//	fstream fis("fisierBinar.txt", ios::in | ios::binary);
//	fis.read((char*)&numarCitit, sizeof(int));
//	fis.close();
//
//	cout << numarCitit;
//}