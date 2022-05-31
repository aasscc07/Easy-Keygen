#include<iostream>

//serial 5B 13 49 77  13 5E 7D  13
//       91 19 73 119 19 94 125 19


//00110011
//00100000
//00010011
//35

char* solve() {
	char* answer = new char[8];
	int N = 0;
	char serial[] = { 91,19,73,119,19,94,125,19 };
	char arr[] = {'A','B','C','D','E','F','G','H','I','J','K','L','N','M','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','n','m','o','p','q','r','s','t','u','v','w','x','y','z','1','2','3','4','5','6','7','8','9','0'};
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 62; k++) {
				if (N > 7) {
					return answer;
				}
				if ((arr[k] ^ (0x10 * (j + 1))) == serial[N]) {
					answer[N] = arr[k];
				}
				
			}
			N++;
		}
	}
	return answer;
}

int main(void) {
	
	for (int i = 0; i < 8; i++) {
		printf("%c",solve()[i]);
	}
	return 0;
}