#include <iostream>

int main(){

unsigned long long int n;
std::cin >> n;
std::cout << n << " ";
while(n != 1){

if(n%2==0)
n = n / 2;
else
n = (n * 3) + 1;

std::cout << n << " ";

}

std::cout << std::endl;
}
