#include <string>
using namespace std;
#include <map>
#include "Savings.h"

class Controller{

map<string, Savings> account_map;

 int auto_gen_acc_num = 1010101;

public:
  string cOpenAccount(string fn, string sn);
  string cDeposit(string acc_num, double amt);
  string cWithdraw(string acc_num, double amt);
  string cViewBalance(string acc_num);

  
};