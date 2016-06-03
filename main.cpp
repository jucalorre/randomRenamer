#include<iostream>
#include<time.h>
#include<cstdlib>
using namespace std;

int main()
{
	srand((unsigned)time(NULL));
	cout<<rand()%99<<endl;
	cin.get();
	return 0;
}
