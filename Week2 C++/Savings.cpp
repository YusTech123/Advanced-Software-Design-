#include "Savings.h"


Savings::Savings(string _fn, string _sn, string _acc_num, double _bal) : fn(_fn), sn(_sn), acc_num(_acc_num){
  bal = _bal;
}
void Savings::withdraw(double amt){
  bal-=amt;
}
void Savings::deposit(double amt){
  bal+=amt;
}
double Savings::viewBalance(){
  return bal;
}
string Savings::getAccountNumber(){
  return acc_num;
}

ostream& operator<<(ostream& os, const Savings& sObject){
  os << sObject.fn << " " << sObject.sn << " " << sObject.bal <<" " <<sObject.acc_num;
}