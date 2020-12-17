#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string sentence;

	cout << "please enter a sentence\n";
	
	getline(cin, sentence);

	cout << sentence << endl;

	replace(sentence.begin(), sentence.end(), 'e', 'X');

	//for (int i = 0; i < size(sentence); i++) 
	//{
	//	if (sentence[i] == 'e') 
	//	{
	//		sentence[i] = 'X';
	//	}
	//}

	cout << sentence << endl;
}