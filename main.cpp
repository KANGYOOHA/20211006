#include <iostream>
//STL
#include <string>

using namespace std;

int main()
{
	string HelloWorld = "Hello World";
	//HelloWorld[0] = 'J';
	string UpperCase = "";
	string LowerCase = "";
	
	string Hello = "�ȳ��ϼ���."; //utf-8 ,�ѱ��� 2����Ʈ

	for (auto S : HelloWorld)
	{
		UpperCase.push_back(toupper(S));
	}
	for (auto S : HelloWorld)
	{
		LowerCase.push_back(tolower(S));
	}

	cout << UpperCase << endl;
	cout << LowerCase << endl;
	cout << HelloWorld + Hello << endl;

	return 0;
}