#ifndef MANUSIA_H
#define MANUSIA_H
using namespace std;
class mahasiswa {
public:
	string name;
	jantung VarJantung;
	manusia(string pName)
		: name(pname) {
		cout << name << "hiduo\n";
	}
	~manusia() {
		cout << name << "mati\n"
	}
	
	
};
