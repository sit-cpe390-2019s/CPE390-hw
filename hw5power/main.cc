#include <iostream>
using namespace std;

extern uint32_t power(uint32_t x, uint32_t n);

int main() {
	for (int n = 1; n <= 30; n++)
		cout << n << '\t' << power(2, n) << '\t' << power(3,n) << '\n';
}
