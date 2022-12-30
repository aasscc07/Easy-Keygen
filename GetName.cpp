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
	
	char serial[] = { 91,19,73,119,19,94,125,19 }; //insert Value in Array
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 32; k <= 126; k++) {
				if (N > 7) {
					return answer;
				}
				//알고리즘에 따라 바꿈
				if ((k ^ (0x10 * (j + 1))) == serial[N]) {
					answer[N] = k;
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
