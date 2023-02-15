#include "Controller.h"
#include <string.h>



 string Controller::cOpenAccount(string fn, string sn){
   Savings sObject(fn, sn, to_string(auto_gen_acc_num), 0.0);
   account_map.insert({to_string(auto_gen_acc_num), sObject});
   auto_gen_acc_num++;
   return "Account successfully created. Account number is: "+ to_string(auto_gen_acc_num -1); 
   
 }
  string Controller::cDeposit(string acc_num, double amt){
    
  }
  string Controller::cWithdraw(string acc_num, double amt){
    
  }
  string Controller::cViewBalance(string acc_num){
    
  }