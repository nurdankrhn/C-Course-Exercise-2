#include<stdio.h>

void disp_pascal_triangle(int n);
void combination(int n, int k);
int factorial(int num);

int main() {
	
	int n;
	
	printf("n: ");
	scanf("%d",&n);
	
	printf("%d satirli pascal ucgeni:\n\n",n);
	disp_pascal_triangle(n);

	return 0;
}

void disp_pascal_triangle(int n) {
	
	int i, j;
	int space=n-1;
	
	for(i=0;i<n;i++){ //i pascal üçgenindeki satır numaralarını ifade ediyor.
		
		for(j=0;j<space;j++)
			putchar(' ');
		
		space--;
		
		for(j=0;j<=i;j++)
			combination(i,j);
			
		putchar('\n');
	}
	
	
	
}

void combination(int n, int k) { //C(n,k)kombinasyonu n! / (k ! * (n–k)!)

	int i,comb_result;

	comb_result = factorial(n) / (factorial(k) * factorial(n-k));
	printf("%d ",comb_result);	
	
}

int factorial(int num) {
	
	int factorial=1,i;
	
	for(i=1;i<=num;i++)
		factorial*=i;
			
	return factorial;
}
