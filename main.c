#include "functions.h"

int main ()
{
	number7 ();

	return 0;
}


                                                                                                                                    
//The number 3797 has an interesting property. Being prime itself, it is possible to continuously remove digits from left to right, and remain prime at each stage: 3797, 797, 97, and 7. Similarly we can work from right to left: 3797, 379, 37, and 3.
//Find the sum of the only eleven primes that are both truncatable from left to right and right to left.
//NOTE: 2, 3, 5, and 7 are not considered to be truncatable primes.

//It was proposed by Christian Goldbach that every odd composite number can be written as the sum of a prime and twice a square.
/*9 = 7 + 212
15 = 7 + 222
21 = 3 + 232
25 = 7 + 232
27 = 19 + 222
33 = 31 + 212*/
//It turns out that the conjecture was false.
//What is the smallest odd composite that cannot be written as the sum of a prime and twice a square?

//There are exactly ten ways of selecting three from five, 12345:
//123, 124, 125, 134, 135, 145, 234, 235, 245, and 345
//In combinatorics, we use the notation, 5C3 = 10.
//In general, nCr =	n!/r!(n-r)!, where r <= n, n! = n(n-1)...321, and 0! = 1.
//It is not until n = 23, that a value exceeds one-million: 23C10 = 1144066.
//How many, not necessarily distinct, values of  nCr, for 1  n  100, are greater than one-million

//Each character on a computer is assigned a unique code and the preferred standard is ASCII. 
//For example, uppercase A = 65, asterisk (*) = 42, and lowercase k = 107.
//A modern encryption method is to take a text file, convert the bytes to ASCII, then XOR each byte with a given value, 
//taken from a secret key. The advantage with the XOR function is that using the same encryption key on the cipher text, 
//restores the plain text; for example, 65 XOR 42 = 107, then 107 XOR 42 = 65.
//For unbreakable encryption, the key is the same length as the plain text message, and the key is made up of random bytes. 
//The user would keep the encrypted message and the encryption key in different locations, and without both "halves", 
//it is impossible to decrypt the message.
//Unfortunately, this method is impractical for most users, so the modified method is to use a password as a key. 
//If the password is shorter than the message, which is likely, the key is repeated cyclically throughout the message.
//The balance for this method is using a sufficiently long password key for security, but short enough to be memorable.
//Your task has been made easy, as the encryption key consists of three lower case characters. Using cipher1.txt
//(right click and 'Save Link/Target As...'), a file containing the encrypted ASCII codes, and the knowledge that the plain 
//text must contain common English words, decrypt the message and find the sum of the ASCII values in the original text.






