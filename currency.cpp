#include <iostream>

using namespace std;

int main() {

  // Declarations
  double pesos;
  double reais;
  double soles;
  double dollars;
  
  // Getting Inputs
  cout << "Enter number of Colombian Pesos: ";
  cin >> pesos;

  cout << "Enter number of Brazilian Reais: ";
  cin >> reais;

  cout << "Enter number of Peruvian Soles: ";
  cin >> soles;

  // Calculation
  dollars = (0.05*pesos) + (0.18*reais) + (0.26*soles);

  cout << "US Dollars = $" << dollars << endl;

  
}