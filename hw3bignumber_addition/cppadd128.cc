#include "BigNum.hh"

void add128(BigNum& dest, const BigNum& left, const BigNum& right) {
	dest.d = left.d + right.d; // look up how to do carry ARM   ADD WITH CARRY ADC
	dest.c = left.c + right.c;// + carry;
	dest.b = left.b + right.b;// + carry;
	dest.a = left.a + right.a;// + carry;
}
