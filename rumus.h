#include <iostream>

using namespace std;

string opsi[3] = {"Batu", "gunting", "kertas"};

int randomNum(){
  srand(time(NULL));
  return rand() % 3;
}

int input(int opsi_user){
  cout << "Mini Game" <<endl;
  cout << "0.Batu" <<endl;
  cout << "1.gunting" <<endl;
  cout << "2.kertas" <<endl;
  cout << "Masukan pilihan anda : ";
    cin >> opsi_user;
  return opsi_user;
}

void massage(int input_user, int input_KET){
  cout << "Pilihan anda : " << opsi[input_user] <<endl;
  cout << "Pilihan KET  : " << opsi[input_KET] <<endl;
  if(input_user == 0 && input_KET == 1  || input_user == 1 &&   
  input_KET == 2 || input_user == 2 && input_KET == 0){
    cout << "You Win against KET";
  }else if(input_user == 0 && input_KET == 2  || input_user == 1   && input_KET == 0 || input_user == 2 && input_KET == 1){
    cout << "You Lose against KET";  
  }else{
    cout << "Deuce against KET";
  }
  
  // switch(input_user){
  //   case 0:
  //     if(input_KET == 1){
  //       cout << "Selamat anda berhasil mengalahkan KET";
  //     }else if(input_KET == 0){
  //       cout 
  //     }
      
  // }
}