#include <string>
#include <ostream>
using namespace std;

class Savings{

string fn, sn, acc_num;
double bal;

public:
Savings(string _fn, string _sn, string acc_num, double _bal);
void withdraw(double amt);
void deposit(double amt);
double viewBalance();
string getAccountNumber();
friend ostream& operator<<(ostream & os, const Savings & sObject);

};