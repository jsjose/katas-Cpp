#include <iostream>
#include <vector>

using namespace std;

long queueTime(std::vector<int> customers, int n)
{
	long p = 0, i, j;

	cout << "colas  " << n << endl;

	while (!customers.empty())
	{
		for (customers.size()>n? i = n-1 : i = customers.size()-1; i >= 0; i--)
		{
			if ((customers.size()) > i) customers[i]--;
			if (customers[i] == 0) customers.erase(customers.begin()+i);	
			for (j = 0; j < customers.size(); j++) cout << customers[j];
			cout << endl;		
		}
		p++;	
		// cout << "p = " << p << endl;
	}

	return p;
}

int main(int argc, char const *argv[])
{
	int Datos1[] = {};
	int Datos2[] = {1,2,3,4};
	int Datos3[] = {2,2,3,3,4,4};
	int Datos4[] = {1,2,3,4,5};

	vector<int> vDatos1 (Datos1, Datos1 + sizeof(Datos1) / sizeof(int) );
	vector<int> vDatos2 (Datos2, Datos2 + sizeof(Datos2) / sizeof(int) );
	vector<int> vDatos3 (Datos3, Datos3 + sizeof(Datos3) / sizeof(int) );
	vector<int> vDatos4 (Datos4, Datos4 + sizeof(Datos4) / sizeof(int) );

    cout << queueTime(vDatos1, 1) << endl;
    cout << queueTime(vDatos2, 1) << endl;
    cout << queueTime(vDatos3, 2) << endl;
    cout << queueTime(vDatos4, 100) << endl;

	return 0;
}