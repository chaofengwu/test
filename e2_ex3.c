#include <stdio.h>

int find_upper(int n){
	int temp = n;
	int i = -3;
	while(temp > 0){
		 i= i + 4;
		temp = temp - i;
	}
	int max = (i+1)/2;
	if(max + temp > 0){
		return 1-temp;
	}
	else{
		return i + temp;
	}
}

int find_lower(int n){
	int temp = n;
	int i = -1;
	while(temp > 0){
		i = i + 4;
		temp = temp - i;
	}
	int max = (i+1)/2;
	if(max + temp > 0){
		return 1-temp;
	}
	else{
		return i + temp;
	}
}

int main(){
	printf("input number n: ");
	int n = -1;
	scanf("%d", &n);
	int upper = find_upper(n);
	int lower = find_lower(n);
	printf("upper = %d, lower = %d\n", upper, lower);
	return 0;
}