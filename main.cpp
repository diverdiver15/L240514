#include<iostream>
using namespace std;
//��Ģ�������α׷� ������ 
/*
int main() 
{
	int a = 0;//���� ���� 
	int b = 0;

	cin >> a;
	cin >> b;
	// ��Ģ���� 
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;

	return 0;
}

//1���� �迭 
int main()
{
	int Array[5] = { 0, 1, 2, 3, 4 }; //�迭 

	Array[0] = 10;
	Array[1] = 20;
	Array[2] = 30;
	Array[3] = 40;
	Array[4] = 50;
	 
	return 0;
}
int main()
{
	int korean = 100;
	int math = 60;
	int Eng = 75;

	int Total = korean + math + Eng;
	float Average = (float)Total / 3.0f;

	int Temp = (int)Average;
	cout << Total << endl;
	cout << Average << endl;
	cout << Temp << endl;

}
int main()
{
	for (int i = 0; true; i++)
		cout << i << endl;
}
//100���� ¦���� �հ� ���ض�  
int main()
{
	int Sum = 0;
	for (int i = 0; i < 100; i = i + 2)
	{
		Sum = Sum + i; //Sum += i;
	}
	cout << Sum << endl;
}*/
int main()
{
	int Map[10][10] =
	{
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 1, 0, 0, 0, 1, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 1, 1, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 1, 0, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 1, 0, 0, 0, 1 },
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	};

	int PlayerX = 1;
	int PlayerY = 1;
	int GateX = 8;
	int GateY = 8;
	char Key = 0;

	for (;;)
	{
		cin >> Key; //wasd
		if (Key == 'w')
		{
			PlayerY--;
		}
		else if (Key == 's')
		{
			PlayerY++;
		}
		else if (Key == 'a')
		{
			PlayerX--;
		}
		else if (Key == 'd')
		{
			PlayerX++;
		}

		system("cls");
		for (int Y = 0; Y < 10; ++Y)
		{
			for (int X = 0; X < 10; ++X)
			{
				if (PlayerX == X && PlayerY == Y)
				{
					cout << "P";
				}
				else if (GateX == X && GateY == Y)
				{
					cout << "G";
				}
				else if (Map[Y][X] == 0)
				{
					cout << " ";
				}
				else if (Map[Y][X] == 1)
				{
					cout << "*";
				}
				
			}
			cout << endl;
		}
	}
	return 0;
}
