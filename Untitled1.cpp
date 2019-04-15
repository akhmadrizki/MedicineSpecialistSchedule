#include <iostream>
#include <string>
using namespace std;

int main(){
	system("color F4");
	
	string NamaDokter[] = {
		"Prof. Dr. L. A.   Lesmana, Ph.D, FACG",
		"Prof. Dr. Suwandhi Widjaja, Ph.D",
		"Prof. Dr. T. Santoso S., MD, FACC, FESC",
		"DR.Dr. C. Martin. Rumede, Sp.PD, KP",
		"DR. Dr. Aulia Rizka, Sp.PD, KGer",
		"Prof. DR. Dr. Heru Sundaru, SpPD-KAI",
		"Dr. Sally Aman Nasution, Sp.PD, KKV",
		"Dr. Joko Budiman Jong, Sp.PD, KKV",
		"Dr. Mayorita Ponggawa Hutabarat, SpPD",
		"Dr. Ginova Nainggolan, Sp.PD, KGH"
	};
	
	string senin[] = {
		"10.00 - 16.00",
		"14.30 - 16.30",
		"14.00 - selesai",
		"14.00 - selesai",
		"      -      ",
		"16.00 - 21.00",
		"14.00 - 16.00",
		"09.30 - 10.30",
		"10.00 - 12.00",
		"10.00 - 12.00"
	};
	
	string selasa[] = {
		"11.00 - selesai",
		"14.30 - 16.30",
		"14.30 - 16.30",
		"14.00 - selesai",
		"14.00 - selesai",
		"16.00 - 21.00",
		"14.00 - 16.00",
		"      -      ",
		"14.00 - 16.00",
		"17.00 - 19.00"
	};
	
	string rabu[] = {
		"10.00 - 16.00",
		"14.30 - 16.30",
		"      -      ",
		"14.00 - selesai",
		"      -      ",
		"16.00 - 21.00",
		"17.00 - 19.00",
		"14.00 - 16.00",
		"09.30 - 10.30",
		"08.00 - 10.00"
	};
	
	string kamis[] = {
		"11.00 - selesai",
		"14.30 - 16.30",
		"14.00 - selesai",
		"      -      ",
		"14.00 - 16.00",
		"09.30 - 10.30",
		"17.00 - 19.00",
		"      -      ",
		"17.00 - 21.00",
		"      -      "
	};
	
	string jumat[] = {
		"11.00 - selesai",
		"14.30 - 16.30",
		"14.30 - 16.30",
		"14.00 - selesai",
		"14.00 - selesai",
		"16.00 - 21.00",
		"14.00 - 16.00",
		"      -      ",
		"14.00 - 16.00",
		"17.00 - 19.00"
	};
	
	cout << "----------------------------------------------------------- Jadwal Dokter Spesialis Penyakit Dalam ---------------------------------------------------------------\n\n";	
	cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
	cout << "    Nama Dokter \t\t\t\t  Senin \t\t  Selasa \t\t  Rabu \t\t\t  Kamis \t\t\t  Jumat                 ";
	cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
	
	for(int i = 0; i < 10; i++){
		cout << NamaDokter[i] << "\t |\t" <<senin[i] <<"\t |\t"<<selasa[i] <<"\t |\t"<<rabu[i] <<"\t |\t"<<kamis[i] <<"\t |\t"<<jumat[i] <<endl; 
	}
	
}
