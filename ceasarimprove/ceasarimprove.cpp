// ceasarimprove.cpp 
//Lisa Jacklin
//CS 201
//12/1/2021

//improved version of the ceasar-shift.cpp from HW7


#include <iostream>

char encrypt(char message[1000], int key);

int main()
{
	//creates a character array? with a max of 100 characters as well as character ch
			//which is the separation of the whatever message was given.
	char message[1000];
	int  key;

	std::cout << "please enter a message to encrypt: ";
	std::cin >> message;
	std::cout << "Enter key: ";
	std::cin >> key;

	encrypt(message, key);
}


char encrypt(char message[1000], int key) {

	char ch;
	int i;
	//now, with the amount of shift given by key, we can seaparate the message
		   //and change each char to the new adjusted value.
	for (i = 0; message[i] != '\0'; ++i) {
		ch = message[i];
		if (ch >= 'a' && ch <= 'z') {
			ch = ch + key;
			if (ch > 'z') {
				ch = ch - 'z' + 'a' - 1;
			}
			message[i] = ch;
		}
		else if (ch >= 'A' && ch <= 'Z') {
			ch = ch + key;
			if (ch > 'Z') {
				ch = ch - 'Z' + 'A' - 1;
			}
			message[i] = ch;
		}

	}
	std::cout << "encrypted message: " << message;
	return message[1000];
}