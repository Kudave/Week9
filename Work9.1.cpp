#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int numStd, Std[100],t=0;
	scanf("%d", &numStd);
	for (int i=0; i<numStd; i++) {
		scanf("%d", &Std[i]);
	}
	
	for (int i = 0; i < numStd; i++) {
		for (int j = i+1; j < numStd; j++) {
			if ((Std[i] / 100) == (Std[j] / 100)) {
				t++;
			}
			else if (((Std[i] % 100) / 10) == ((Std[j] % 100) / 10))
				t++;
			else if ((Std[i] % 10)  == (Std[j] % 10) )
				t++;
		}
	}
	printf("%d", t);
	
}