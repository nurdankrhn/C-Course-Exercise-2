#include<stdio.h>

int sumdigit(unsigned long long val);

int main() {
	
	unsigned long long num;
	
	printf("Number: ");
	scanf("%ull",&num);
	
	printf("Sum: %d", sumdigit(num));
	
	return 0;
}

int sumdigit(unsigned long long val) {
	
	int sumdigit = 0;
	while( val != 0){
		
		sumdigit += val % 10;
		val -= (val % 10);
		val /= 10;	
	}
	
	return sumdigit;
}
