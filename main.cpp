#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

struct studentas{

	std::string vardas;
	std::string pavarde;
	std::vector <int> pazymiai;
	int egz_pazymys;
	double vidurkis;
};


int main(){

  int studentu_sk;
  int temp;
  int pazymiu_sk;
  studentas stud[10];

	std::cout << "Studentų skaičius:" << std::endl;
	std::cin >> studentu_sk;

	for (int i = 0; i < studentu_sk; i++){
		std::cout << "Studento vardas:" << std::endl;
		std::cin >> stud[i].vardas;

		std::cout << "Studento pavardė:" << std::endl;
		std::cin >> stud[i].pavarde;

		std::cout << "Studento pažymių skaičius:" << std::endl;
		std::cin >> pazymiu_sk;

		for (int j = 0; j < pazymiu_sk; j++){
			std::cout << "Įvesk pažymį (1-10): " << std::endl;
			std::cin >> temp;
			stud[i].pazymiai.push_back(temp);
		}

		std::cout << "Egzamino pažymys:" << std::endl;
		std::cin >> stud[i].egz_pazymys;

		int sum = std::accumulate(stud[i].pazymiai.begin(), stud[i].pazymiai.end(), 0);

		stud[i].vidurkis = sum / stud[i].pazymiai.size();
		stud[i].vidurkis = stud[i].vidurkis * 0.4 + stud[i].egzaminas * 0.6;

		sort(stud[i].pazymiai.begin(), stud[i].pazymiai.end());
	}

	for(int i = 0; i< stud_skc; i++){
		std::cout << stud[i].vardas << " " << stud[i].pavarde << " " << stud[i].vidurkis << std::endl;
	}
}
