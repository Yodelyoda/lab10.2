#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void Change(char* s)
{
	FILE * t2;

	t2 = fopen("t2.txt", "w");


		for (int i = 0; s[i] != ' '; i++)
		{
			char ch = s[i];
				ch = toupper(ch);
			fputc(ch, t2);

		}
}

	
int main()
{

	char str1[101];
	char str2[101];
	ifstream f("t1.txt");

	f >> str1;
	Change(str1);
	cout << "File t2 has been changed " << endl;
	f.close();

	cin.get();
	return 0;
}