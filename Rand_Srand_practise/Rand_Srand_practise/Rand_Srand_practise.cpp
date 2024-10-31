#include <iostream>
#include <string>
using namespace std;


int changeNumsPosition(int a) {
	char temp;
	string strNum = to_string(a);
	temp = strNum[0];
	strNum[0] = strNum[strNum.size() - 1];
	strNum[strNum.size() - 1] = temp;
	a = stoi(strNum);
	cout << "Result = " << a;
	return a;
}

void calculateYearlyConsumption(double a) {

	double yearlyConsumption,Price;

	yearlyConsumption = a * 12;

	if (yearlyConsumption >= 0) {
		if (yearlyConsumption <= 1200)
			Price = yearlyConsumption * 0.12;			// illik qaz serfiyyati
		else if (yearlyConsumption > 1200 && yearlyConsumption <= 2500)
			Price = yearlyConsumption * 0.2;
		else if (yearlyConsumption > 2500)
			Price = yearlyConsumption * 0.25;
		cout << "Odenilecek mebleg = " << Price << " Azn";
	}
	else
		cout << "Duzgun daxil edin!";
} 

void calculateBenzinConsumption(double km) {
	double const benzinPrice = 1.60;
	double consumption;

	cout << "Mashinin 100-e neche litr benzin serf etdiyini daxil edin: ";
	cin >> consumption;

	double benzinConsumption = km / consumption;
	cout << "Serf edilen benzin: " << benzinConsumption << " litr\n";
	cout << "Odenilecek mebleg: " << benzinConsumption * benzinPrice << " Azn";
	
	
}

int main() {

	/*int num;
	double monthlyConsumption , km;

	cout << "eded daxil edin: ";
	cin >> num;
	changeNumsPosition(num);


	cout << "Ayliq serfiyyat daxil edin: ";
	cin >> monthlyConsumption;
	calculateYearlyConsumption(monthlyConsumption);		

	cout << "Gedilen yolu daxil edin: ";
	cin >> km;								
	calculateBenzinConsumption(km);*/


	//int num = 664; // 100 + 20 + 4
	//string str = to_string(num);
	//int teklik = num % 10;
	//int onlug = (num - teklik) % 100;						////teklik onlug yuzluk
	//int yuzluk = num - (teklik + onlug);
	//cout << yuzluk << " + " << onlug << " + " << teklik;

}

