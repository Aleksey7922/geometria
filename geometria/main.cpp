#include<iostream>
using namespace std;
using std::cout;
using std::cin;

//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define PLUS_MINUS

void main()
{
	setlocale(LC_ALL, "");

#ifdef SQUARE


	int n;
	cout << "Введите количество звездочек "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // SQUARE

#ifdef TRIANGLE_1
	int n;
	cout << "Введите количество звездочек "; cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;

	}
#endif // TRIANGLE_1

#ifdef TRIANGLE_2

	int n;
	cout << "Введите количество звездочек "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

#endif // TRIANGLE_2

#ifdef TRIANGLE_3

	int n;
	cout << "Введите количество звездочек "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << " ";
		{
			for (int j = 0; j < i; j++)cout << " ";
			for (int j = i; j < n; j++)cout << "* ";
			cout << endl;
		}


	}
#endif //  TRIANGLE_3

#ifdef PLUS_MINUS
	int n;
	cout << "Введите количество звездочек"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//if ((i + j) % 2 == 0)cout << "+ "; else cout << "- ";
			//((i + j) % 2 == 0) ? cout << "+ " : cout << "- ";
			//(i + j) % 2 == 0 ? cout << "+ " : cout << "- ";
			//cout << ((i + j) % 2 == 0 ? "+ " : "- ");
			cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << endl;
	}
#endif // PLUS_MINUS






}