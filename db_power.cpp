//Matthew McCourry
//Calculate the power of a number using recursion
#include <iostream>

int base = 0;
int exponent = 0.0;

long int power(int base, int exponent){
 
   if (exponent == 0){
    return 1;
   } else {
    return base *  power(base, exponent - 1);
   }
}

//End of Globals
int main(){

long int answer = 0.0;
int cBase = 0;
int cExponent = 0;

    std::cout << "calculate which number \n";
    std::cin >> cBase;
    std::cout << "to which power?\n";
    std::cin >> cExponent;
    
    answer = power(cBase, cExponent);
    std::cout << "The answer is "<< answer << std::endl;

}
//end of main

