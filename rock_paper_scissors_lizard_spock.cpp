/* This is the game of rock, paper, scissors, lizard, spock*/

#include <iostream>
#include <stdlib.h>

int main() {

srand (time(NULL));
 
int computer = rand() % 5 + 1;
 
int user = 0;

std::cout << "====================\n";
std::cout << "rock paper scissors lizard spock!\n";
std::cout << "====================\n";
 
std::cout << "1) ✊\n";
std::cout << "2) ✋\n";
std::cout << "3) ✌️\n";
std::cout << "4) 🦎\n";
std::cout << "5) 🖖\n";
 
std::cout << "shoot! ";

std::cin>>user;

//Input from user
if(user == 1) {
  std::cout<<"User: Rock\n";
}
else if(user == 2) {
  std::cout<<"User: Paper\n";
}
else if(user == 3) {
  std::cout<<"User: Scissors\n";
}
else if(user == 4) {
  std::cout<<"User: Lizard\n";
}
else if(user == 5) {
  std::cout<<"User: Spock\n";
}

//Input from computer 
if(computer == 1) {
  std::cout<<"Computer: Rock\n";
}
else if(computer == 2) {
  std::cout<<"Computer: Paper\n";
}
else if(computer == 3) {
  std::cout<<"Computer: Scissors\n";
}
else if(computer == 4) {
  std::cout<<"Computer: Lizard\n";
}
else if(computer == 5) {
  std::cout<<"Computer: Spock\n";
}

//Final result

if (user ==1 && computer == 2) {
  std::cout<<"Computer wins!\n";
}
else if (user ==1 && computer == 3) {
  std::cout<<"You win!\n";
}
else if (user ==1 && computer == 4) {
  std::cout<<"You win!\n";
}
else if (user ==1 && computer == 5) {
  std::cout<<"Computer wins!\n";
}
else if (user ==2 && computer == 1) {
  std::cout<<"You win!\n";
}
else if (user ==2 && computer == 3) {
  std::cout<<"Computer wins!\n";
}
else if (user ==2 && computer == 4) {
  std::cout<<"Computer wins!\n";
}
else if (user ==2 && computer == 5) {
  std::cout<<"You win!\n";
}
else if (user ==3 && computer == 1) {
  std::cout<<"Computer wins!\n";
}
else if (user ==3 && computer == 2) {
  std::cout<<"You win!\n";
}
else if (user ==3 && computer == 4) {
  std::cout<<"You win!\n";
}
else if (user ==3 && computer == 5) {
  std::cout<<"Computer wins!\n";
}
else if (user ==4 && computer == 1) {
  std::cout<<"Computer wins!\n";
}
else if (user ==4 && computer == 2) {
  std::cout<<"You win!\n";
}
else if (user ==4 && computer == 3) {
  std::cout<<"Computer wins!\n";
}
else if (user ==4 && computer == 5) {
  std::cout<<"You win!\n";
}
else if (user ==5 && computer == 1) {
  std::cout<<"You win!\n";
}
else if (user ==5 && computer == 2) {
  std::cout<<"Computer wins!\n";
}
else if (user ==5 && computer == 3) {
  std::cout<<"You win!\n";
}
else if (user ==5 && computer == 4) {
  std::cout<<"Computer Wins!\n";
}
else if (user == computer) {
  std::cout<<"Try again! It's a draw.\n";
}


}
