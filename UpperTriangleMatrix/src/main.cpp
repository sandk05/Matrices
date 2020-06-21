#include <iostream>
#include <iomanip>
using namespace std;
class UTM
{
public:
	UTM(int size)
	{
		SIZE = size;
		rSIZE = (SIZE*(SIZE +1))/2;
		aPtr = new int[rSIZE];
	}
	void set(int i,int j, int data)
	{
		if(i <= j)
		{
			//int pos = ((2 * SIZE * i) - (i * i) +i)/2 + (j - i);//ROW MAJOR
			int pos = ((j *(j + 1))/2) + i ; //COLUMN MAJOR
			aPtr[pos] = data;
		}

	}
	int get(int i, int j)
	{
		if(i <= j)
		{
			//int pos = ((2 * SIZE * i) - (i * i) +i)/2 + (j - i);//ROW MAJOR
			int pos = ((j *(j + 1))/2) + i ; //COLUMN MAJOR
			return aPtr[pos];
		}
		return 0;
	}
	void display()
	{
		for(int i = 0; i < SIZE; i++)
		{
			for (int j = 0; j < SIZE; j++)
			{
				cout <<setw(3) <<get(i,j) <<" ";
			}
			cout <<endl;
		}
		for(int i = 0; i< rSIZE; i++)
			cout <<setw(3) <<aPtr[i] <<" " ;
		cout <<endl;
	}
	void create()
	{
		for(int i = 0;i < SIZE; i++)
		{
			for(int j = 0; j < SIZE; j++)
			{
				set(i,j,(rand()%100)+1);
			}
		}
	}
	~UTM()
	{
		delete [] aPtr;
	}
private:
	int SIZE;
	int rSIZE;
	int* aPtr;
};

int main()
{
	UTM utm(6);
	utm.create();
	utm.display();
	return 0;
}