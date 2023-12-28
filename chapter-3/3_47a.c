/*
* (Enforcing Privacy with Cryptography)
* The explosive growth of Internet communications and data storage on Internet-connected computers has greatly increased privacy concerns. 
* The field of cryptography is concerned with coding data to make it difficult (and hopefully—with the most advanced schemes—impossible) for unauthorized users to read.
* In this exercise, you’ll investigate a simple scheme for encrypting and decrypting data.
* A company that wants to send data over the Internet has asked you to write a program that will encrypt it so that it may be transmitted more securely.
* All the data is transmitted as four-digit integers.
* Your application should read a four-digit integer entered by the user and encrypt it as follows:
* Replace each digit with the result of adding 7 to the digit and getting the remainder after dividing the new value by 10.
* Then swap the first digit with the third, and swap the second digit with the fourth.
* Then print the encrypted integer.
* Write a separate application that inputs an encrypted four-digit integer and decrypts it (by reversing the encryption scheme) to form the original number.
*/

#include <stdio.h>

int main(void){
	int num;
	printf("%s", "Enter a four-digit integer: ");
	scanf("%d", &num);

	int first = num / 1000;
	int second = num / 100 % 10;
	int third = num / 10 % 10;
	int fourth = num % 10;

	int encryptedFirst = (first + 7) % 10;
	int encryptedSecond = (second + 7) % 10;
	int encryptedThird = (third + 7) % 10;
	int encryptedFourth = (fourth + 7) % 10;

	printf("Encryted integer: %d%d%d%d\n", encryptedThird, encryptedFourth, encryptedFirst, encryptedSecond);

	return 0;
}