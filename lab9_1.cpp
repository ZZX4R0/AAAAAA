#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
    double loan;
    double rate;
    double amount;
    
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> amount;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	int i = 1;
	while(i != 0){
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i;
	cout << setw(13) << left << loan;
	cout << setw(13) << left << loan * (rate/100);
	cout << setw(13) << left << loan + loan * (rate/100);
	if(loan + loan * (rate/100) <= amount){
	cout << setw(13) << left << loan + loan * (rate/100);
	cout << setw(13) << left << "0.00";
	}else{
	    cout << setw(13) << left << amount;
	    cout << setw(13) << left << loan + loan * (rate/100) - amount;
	}
	cout << "\n";	
	if(loan + loan * (rate/100) <= amount) break;
	loan = loan + loan * (rate/100) - amount;
	i++;
	}
}