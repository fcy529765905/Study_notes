#include<iostream>
using namespace std;
char words[500];int i = 0;

int reverse(){
    char m = words[i]; i++;
    if (m == ' ')
    {
        return 1;
    }
    if (m != ' '&& m != '\0')
    {
        reverse();
        cout<<m;
        return 1;
    }
}

int main(){
    cin.getline(words,500);   
    while (words[i] != '\0') {
		if (reverse() == 1) {
			cout << ' ';
		}
	}
    return 0;
}