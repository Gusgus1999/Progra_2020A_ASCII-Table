#include <iostream>
using namespace std;

int main()
{
	char UpLeftConr = (char)201;
	char HorLine = (char)205;
	char UpRightCorn = (char)187;
	char VertLine = (char)186;
	char LowerLeftCorn = (char)200;
	char LowerRightCorn = (char)188;

	cout << UpLeftConr;
	for (int i = 0; i < 32; i++)
	{
		if (i == 16)
		{
			cout << "  ASCII Table  ";
		}

		cout << HorLine;
	}
	cout << UpRightCorn;


	for (int i = 0; i < 128; i++)
	{

		cout << endl << VertLine  << i << ":" << (char)i << "		" << VertLine << "	" << i + 128 << ":" << (char)(i + 128) << "		" << VertLine;

	}

	cout << endl << LowerLeftCorn;
	for (int i = 0; i < 32; i++)
	{
		if (i == 16)
		{
			cout << "  ASCII Table  ";
		}

		cout << HorLine;
	}
	cout << LowerRightCorn;
	system("PAUSE");
	return 0;
}