#include <iostream>
#include <iomanip>
using namespace std;

class TDM
{
public:
	TDM(int size)
	{
		SIZE = size;
		rSIZE = 3 * SIZE -2;
		aPtr = new int[rSIZE];
	}
	void set(int i,int j, int data)
	{
		int pos;
		if(abs(i - j) <= 1)
		{
			if(i - j == 1)
			{
				pos = j; 
			}
			else if(i - j == 0)
			{	
				pos = SIZE + j - 1;
			}
			else
			{
				pos = 2* SIZE - 2 + j;
			}
			aPtr[pos] = data;
		}
	}
	int get(int i, int j)
	{
		int pos;
		if(abs(i - j) <= 1)
		{
			if(i - j == 1)
			{
				pos = j; 
			}
			else if(i - j == 0)
			{	
				pos = SIZE + j - 1;
			}
			else
			{
				pos = 2* SIZE - 2 + j;
			}
			return aPtr[pos];
		}
		return 0;
	}
	void display()
	{
		for(int i = 0; i < SIZE; i++)
		{
			for(int j = 0; j < SIZE; j++)
			{
				cout <<setw(3) <<get(i,j) << " " ;
			}
			cout <<endl;
		}
		cout<<endl <<endl;
		for(int i = 0; i < rSIZE; i++)
			cout <<setw(3) <<aPtr[i] <<" ";
		cout <<endl;
	}
	void create()
	{
		for(int i = 0; i< SIZE; i++)
		{
			for(int j = 0; j< SIZE; j++)
			{
				set(i,j, rand()%100);
			}
		}
	}
	~TDM()
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
	TDM tdm(6);
	tdm.create();
	tdm.display();
	return 0;
}