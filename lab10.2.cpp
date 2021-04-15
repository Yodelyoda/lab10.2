#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void Change(char* s)
{
	FILE*t2;
	char ch;
	t2 = fopen("t2.txt", "w");
	int j;
		for (int i = 0; s[i] != ' '; i++)
		{
			char ch = s[i];
			ch = toupper(ch);
			fputc(ch, t2);
			j = i;
		}
		for (int i = j; s[i] != '\0'; i++)
		{
			char ch = s[i];
			fputc(ch, t2);
		}


}

	
int main()
{

	char str1[101];
	char str2[101];
	ifstream f1("t1.txt");
	ifstream f2("t1.txt");
	f1 >> str1;
	Change(str1);
	cout << "File t2 has been changed " << endl;
	f1.close();
	f2.close();
	cin.get();
	return 0;
}