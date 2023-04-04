#include<stdio.h>

int intrev(int val);

int main() {
	
	int num;
	
	printf("Number: ");
	scanf("%d",&num);
	
	printf("Reversed: %d", intrev(num));
	return 0;
}

int intrev(int val) {
	
	int tmp_val, digit_value = 1, flag = 0;		// digit_value : basamak değeri
	
	int reversed = 0;
	
	if (val < 0) {
		flag=1;
		val *= -1;
	}
	
	tmp_val = val;
	
	while( tmp_val - (tmp_val % 10) != 0) {
		digit_value *= 10;
		tmp_val /= 10;
	}
	
	while( val != 0) {
		reversed += ((val % 10) * digit_value);
		val -= (val % 10);
		val /= 10;
		digit_value /= 10;
	}
	
	if (flag)
		reversed *= -1;
		
	return reversed;
}
