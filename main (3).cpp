#include <iostream>
using namespace std;

void print_suit(int num){
  if(num == 1){
    cout << "Clubs" << endl;
  }
  else if(num == 2){
    cout << "Diamonds" << endl;
  }
  else if(num == 3){
    cout << "hearts" << endl;
  }
  else if(num == 4){
    cout << "Spades" << endl;
  }
}

int main() {
  int suitNum;
  cout << "Enter a number between 1~4:\n";
  cin >> suitNum;

  while((suitNum <1 || suitNum >4)){
    cout << "Enter a number between 1~4:\n";
    cin >> suitNum;
  }
  print_suit(suitNum);
  
}