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
	
	string Hello = "안녕하세요."; //utf-8 ,한글은 2바이트

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