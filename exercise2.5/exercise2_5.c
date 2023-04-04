#include<stdio.h>

unsigned gcd(unsigned a, unsigned b); // en büyük ortak bölen : greatest common divisor
unsigned lcm(unsigned a, unsigned b); // en küçük ortak kat : least common multiple

int main() {
	
	unsigned num1, num2;
	
	printf("Sayi1: ");
	scanf("%u",&num1);
	
	printf("Sayi2: ");
	scanf("%u",&num2);
	printf("En kucuk ortak kat: %u\n", lcm(num1, num2));
	printf("En buyuk ortak bolen: %u\n", gcd(num1, num2));
	
	
	return 0;
}

unsigned gcd(unsigned a, unsigned b) {

	unsigned i, n, gcd=1;
	
	n = ( a < b ? a : b);
	
	for(i = 1; i <= n; i++) 
		if(a % i == 0 && b % i == 0) 
			gcd = i; 		

	return gcd;
}

unsigned lcm(unsigned a, unsigned b) {
	
	unsigned i=2, n, lcm=1;	
	
	n = ( a > b ? a : b);
	
	if(a % b == 0 || b % a == 0)
		return ( a > b ? a : b);
		
	while(i <= n) 
		if(a % i == 0 || b % i == 0) {
			lcm *= i;
			if(a % i == 0)
				a /= i;
			if(b % i == 0)
				b /= i;	
		}		
		else 
			i++;

	return lcm;
}       
