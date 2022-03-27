#include <iostream>
#include "rumus.h"

using namespace  std;

int main() {
  
  int input_user = 1;
  
  input_user = input(input_user);
  
  system("clear");

  if(input_user >= 0 && input_user < 3){
    massage(input_user,randomNum());
  }else{
    cout << "Kamu harus memilih antara 0 - 2";
  }
}