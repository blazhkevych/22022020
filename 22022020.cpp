#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	double sum = 0, avg;
	const int size = 100;
	int n, k = 0, arr[size]{  };
	cout << "Cout elements="; cin >> n;
	if (n<1 || n>size)
	{
		cout << "Error";
		return 0;
	}
	//for (int i = 0; i < n; i++) {
	//cout << "Enter arr[" << i << "]=";
	//cin >> arr[i];
	srand(time(0));
	int a = -15;
	int b = 110;
	for (int i = 0; i < n; i++)
	{
		//arr[i]=rand();
		arr[i] = a + rand() % (b - a + 1); //0...10
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	//***********

	int p, num;
	if (p >= 0 && p < n && n < size)
	{
		cin >> p >> num;
		for (int i = n; i > p; i--)
			arr[i] = arr[i - 1];

	}
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

}

/*int pmin = 0;
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < arr[pmin]) pmin = i;
	}
	cout << arr[pmin] << endl;
	for (int i = pmin; i < n - 1; i++)
	{
		arr[i] = arr[i + 1];
		n--;
	}
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";*/

		/*double sum = 0, avg;
			const int size = 100;
			int n, k = 0, arr[size]{  };
			cout << "Cout elements="; cin >> n;
			if (n<1 || n>size)
			{
				cout << "Error";
				return 0;
			}
			//for (int i = 0; i < n; i++) {
			//cout << "Enter arr[" << i << "]=";
			//cin >> arr[i];
			srand(time(0));
			int a = -15;
			int b = 110;
			for (int i = 0; i < n; i++)
			{
				//arr[i]=rand();
				arr[i] = a + rand() % (b - a + 1); //0...10
			}
			for (int i = 0; i < n; i++)
			{
				cout << arr[i] << " ";
			}

			//***********

			int pmax = -1;
			for (int i = 0; i < n; i++)
				if (arr[i] % 2 != 0)
				{
					pmax = i; break;
				}
			if (pmax >= 0)
			{
				for (int i = pmax + 1; i < n; i++)
					if (arr[i] > arr[pmax] && (arr[i] % 2 != 0))
						pmax = i;
				cout << "pmax = " << pmax << "Max = " << arr[pmax];
			}
			else cout << "no odd numbers";*/

			/*	double sum = 0, avg;
				const int size = 100;
				int n, k = 0, arr[size]{  };
				cout << "Cout elements="; cin >> n;
				if (n<1 || n>size)
				{
					cout << "Error";
					return 0;
				}
				//for (int i = 0; i < n; i++) {
				//cout << "Enter arr[" << i << "]=";
				//cin >> arr[i];
				srand(time(0));
				int a = -15;
				int b = 110;
				for (int i = 0; i < n; i++)
				{
					//arr[i]=rand();
					arr[i] = a + rand() % (b - a + 1); //0...10
				}
				for (int i = 0; i < n; i++)
				{
					cout << arr[i] << " ";
				}
				//************************************************************
				 //максимальне
				int pmax = 0;
				for (int i = 1; i < n; i++)
				{
					if (arr[i] > arr[pmax])
						pmax = i;
				}
				cout << "\nmax = " << pmax << "\n";

				//мінімальне
				int pmin = 0;
				for (int i = 1; i < n; i++)
				{
					if (arr[i] < arr[pmin])
						pmin = i;
				}
				cout << "min = " << pmin << "\n";

				swap(arr[pmax], arr[pmin]); // функція міняє місцями

				for (int i = 0; i < n; i++)
				{
					cout << arr[i] << " ";
				}*/

				/*double sum = 0, avg;
					const int size = 100;
					int n, k = 0, arr[size]{  };
					cout << "Cout elements="; cin >> n;
					if (n<1 || n>size)
					{
						cout << "Error";
						return 0;
					}
					//for (int i = 0; i < n; i++) {
					//cout << "Enter arr[" << i << "]=";
					//cin >> arr[i];
					srand(time(0));
					int a = -15;
					int b = 30;
					for (int i = 0; i < n; i++)
					{
						//arr[i]=rand();
						arr[i] = a + rand() % (b - a + 1); //0...10
					}
					for (int i = 0; i < n; i++)
					{
						cout << arr[i] << " ";
					}

					int max = arr[0]; //максимальне
					for (int i = 1; i < n; i++)
					{
						if (arr[i] > max) max = arr[i];
					}
					cout << "max = " << max;
				}*/

				/*double sum = 0, avg;
					const int size = 100;
					int n, k = 0, arr[size]{  };
					cout << "Cout elements="; cin >> n;
					if (n<1 || n>size)
					{
						cout << "Error";
						return 0;
					}
					//for (int i = 0; i < n; i++) {
					//cout << "Enter arr[" << i << "]=";
					//cin >> arr[i];
					srand(time(0));
					int a = -15;
					int b = 30;
					for (int i = 0; i < n; i++)
					{
						//arr[i]=rand();
						arr[i] = a + rand() % (b - a + 1); //0...10
					}
					for (int i = 0; i < n; i++)
					{
						cout << arr[i] << " ";
					}
					for (int i = 1; i < n; i++)
					{
						if (arr[i - 1] > arr[i]) k++;
					}
					cout << "K=" << k;*/

					/*const int size = 100;
					int arr[size]{ };
					int n; //кіль елем масиву
					cout << "Count elements = ";
					cin >> n;
					if (n < 1 || n > size)
					{
						cout << "Error" << endl;
						return 0;
					}
					srand(time(0));
					int b = 10;
					int a = -10;
					for (int i = 0; i < n; i++)
						arr[i] = a + rand() % (b - a + 1);
					for (int i = 0; i < n; i++)
						cout << arr[i] << '\t';


					int k = 0;
					for (int i = 1; i < n - 1; i++)
						if (arr[i - 1] > arr[i]) k++;

					cout << " ! " << k << endl;*/