#include<iostream>//单词翻转（使用递归并通过空格分隔实现分段翻转）
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
        return 1;    //必须返回不然每次少个空格
    }
}

int main(){
    cin.getline(words,500);   
    while (words[i] != '\0') {       //使用while do 控制多个返回值情况
		if (reverse() == 1) {
			cout << ' ';
		}
	}
    return 0;
}