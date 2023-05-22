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

	varIbu->cetakAnak();
	varIbu->cetakAnak();
}