#include<stdio.h>

void displ_shape(int n);

int main() {
	
	int n;
	
	printf("n: ");
	scanf("%d",&n);
	
	printf("pattern:\n");
	
	displ_shape(n);
	
	return 0;
}

void displ_shape(int n) {
	int i, j, space = 0;
	
	for(i=1;i<=n;i++) {
	
		for(j=1;j<=space;j++)
			putchar(' ');
		
		space++;
			
		for(j=i;j<=n;j++)		// for(j=(space);j<=n;j++) 
			printf("%d ",j);
			
		putchar('\n');
			
	}
	
	space-=2;
	
	for(i=1;i<=(n-1);i++) {
	
		for(j=1;j<=space;j++)
			putchar(' ');
		
		space--;
			
		for(j=(space+2);j<=n;j++)
			printf("%d ",j);
			
		putchar('\n');
			
	}
	
	
	
	
}
