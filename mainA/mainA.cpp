#include <iostream>
#include <vector>
using namespace std;

#include "anak.h"
#include "ibu.h"

int main() {
	ibu* varIbu = new ibu("dini");
	ibu* varIbu = new ibu("novi");
	anak* varAnak = new anak("tono");
	anak* varAnak = new anak("rini");
	anak* varAnak = new anak("Dewi");

	varIbu->tambahAnak(varAnak1);
	varIbu->tambahAnak(varAnak2);
	varibu2->tambahAnak(varAnak3);
	varibu2->tambahAnak(varAnak1);

	varIbu->cetakAnak();
	varIbu2->cetakAnak();



}