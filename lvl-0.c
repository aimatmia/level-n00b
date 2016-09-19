#include <stdio.h>
#include <stdmath.h>
#include <stdlib.h>

int main(){
	prob6(100);
	prob20(100);
	

int prob6(){
	int n, sum=0, sqsum=0;
	printf("Enter the # of integers to be added and squared\n");
	scanf("%d", &n);
	
	for (int i=0; i<n; i++)
	  sum+=i;
	sum^=2;
	for (int i=1; i<n+1; i++)
	  sqsum+=i^2;
	int diff = sqsum-sum;
	printf("the difference between the sum of the squares of the first %d numbers and the square of the sum= %d\n", n, diff);
}

int prob20(){
	int prod=1, sum=0, n, r;
	printf("Enter integer to be factorialized\n");
	scanf("%d", &n);
	
	for (int i=2; i<n+1; i++)
	   prod*=i;
	while (prod != 0){
           r = prod % 10;
           sum += r;
           prod /= 10;
	}
	printf("Sum of digits for factorial %d = %d", n, sum);
}


}
