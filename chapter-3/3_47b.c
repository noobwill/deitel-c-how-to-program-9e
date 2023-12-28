#include <stdio.h>

int main(void){
	int num;
	printf("%s", "Enter a four-digit integer: ");
	scanf("%d", &num);

	int first = num / 1000;
	int second = num / 100 % 10;
	int third = num / 10 % 10;
	int fourth = num % 10;

	int decryptedFirst = (first + 3) % 10;
	int decryptedSecond = (second + 3) % 10;
	int decryptedThird = (third + 3) % 10;
	int decryptedFourth = (fourth + 3) % 10;

	printf("Decryted integer: %d%d%d%d\n", decryptedThird, decryptedFourth, decryptedFirst, decryptedSecond);

	return 0;
}