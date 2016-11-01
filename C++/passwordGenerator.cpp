#include <iostream>
#include <cstdio>
#include <random>
#include <chrono>
using namespace std;
int main() {
	char a = 0;
	int password_length = 0;
	unsigned seed1 = std::chrono::system_clock::now().time_since_epoch().count();
	std::uniform_int_distribution<char> uni(33,126); // guaranteed unbiased
	std::mt19937 rng(seed1);    // random-number engine used (Mersenne-Twister in this case)
	cout<<"How long do you want your password to be"<<endl;
	cin>>password_length;
	for(int i = 0; i < password_length; i++) {
		a = uni(rng);
		cout<<a;
	}
	cin.ignore();
	getchar();
}