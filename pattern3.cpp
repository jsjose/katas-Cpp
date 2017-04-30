#include<iostream>
using namespace std;

/* Recursive function */
long int pattern(long int no)
{
	int i, j;

  	for(int i = 0; i < no; i++)
	{
		//cout << i << " ";
		for(int j = 0; j < i+1; j++)
		{
			cout << no-j;
		}
		cout << endl;
	}
	return 0;
}

int main(int argc, char** argv)
{
	long int rc, no;

//	cout << "Program to paint pattern 3" << endl;
//	cout << "Enter a number:" << endl;
//	cin >> no;

	//no = (long int)argv[1];

	no = atoi(argv[1]);

	if (no <= 0)
		{
			cout << "" << endl;
			return 0;
		} 
	else 
		{
			//cout << no << endl;
			//cout << argv[1] << endl;
			rc = pattern(no);
		}
		
	return rc;
}


//int main(int argc, char** argv) {
//  std::cout << "Have " << argc << " arguments:" << std::endl;
//  for (int i = 0; i < argc; ++i) {
//      std::cout << argv[i] << std::endl;
//    }
//}