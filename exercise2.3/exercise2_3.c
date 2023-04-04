#include<stdio.h>

void print_shape(int n);
void print_star(int current_star);
void print_space(int current_space);

int main() {
	
	int n;
	
	printf("n: ");
	scanf("%d",&n);
	
	print_shape(n);
		
	return 0;
}

void print_shape(int n) {
	
	int i;
	int star = n;
	int space = 0;
	
	for (i = 0; i < n; i++) {
		
		print_star(star);
		print_space(space);
		print_star(star);
		
		putchar('\n');
		
		star--;
		space += 2;
	}
	
	star++;
	space -= 2;
	
	for (i = 0; i < n; i++) {
		
		print_star(star);
		print_space(space);
		print_star(star);
		
		putchar('\n');
		
		star++;
		space -= 2;
	}
	
}

void print_star(int current_star) {
	int i;
	for (i = 0; i < current_star; i++)
		putchar('*');
}

void print_space(int current_space) {
	int i;
	for (i = 0; i < current_space; i++)
		putchar(' ');
}
