//written by Ryley Danielson

#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main()
{
	// variables
	double numDonuts = 0;
	double numMuffins = 0;
	double totalItems;
	double priceDonuts;
	double priceMuffins;
	double totalPrice;
	string customerName;
	char cupon;
	

	//input
	cout << "What is your name: ";
    getline(cin,customerName);
	cout << setprecision(2) << fixed;
	cout << "What is the price of donuts: ";
	cin >> priceDonuts;
	cout << "What is the price of muffins: ";
	cin >> priceMuffins;
	cout << "How many donuts do you want ($" << priceDonuts<< "): ";
	cin >> numDonuts;
	cout << "How many muffins do you want ($" << priceMuffins << "): ";
	cin >> numMuffins;
	cout << "Do you have a coupon (Y/N): ";
	cin >> cupon;
	cupon = toupper(cupon);
	

	//processing
	totalItems = (numDonuts + numMuffins);

	totalPrice = ((priceDonuts*numDonuts) + (priceMuffins*numMuffins));

	if (cupon == 'Y')
	{
		totalPrice = (totalPrice*.9);
	}


	//output
	cout << "\nName: " << customerName << endl;
	cout << setprecision(0) << fixed;
	cout << "Total item ordered: " << totalItems << endl;
	cout << setprecision(2) << fixed;
	cout << "Total cost: $" << totalPrice << endl;
	cout << "Press ENTER to continue...";

	cin.get();
	cin.get();

	return 0;
}

