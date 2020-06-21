#include <iostream>
#include <iomanip>
using namespace std;
class toeplitz
{
public:
	toeplitz(int size)
	{
		SIZE = size;
		rSIZE = 2 * size - 1;
		aPtr = new int[rSIZE];
	}
	void set(int i, int j, int data)
	{
		int Index;
		if(i <= j)
		{
			Index = j - i;
		}
		else
		{
			Index = SIZE - 1 + i - j;
		}
		aPtr[Index] = data;
	}
	int get(int i, int j)
	{
		int Index;
		if(i <= j)
		{
			Index = j - i;
		}
		else
		{
			Index = SIZE - 1 + i - j;
		}
		return aPtr[Index];
	}
	void display()
	{
		for(int i = 0; i < SIZE; i++)
		{
			for(int j = 0; j < SIZE; j++)
			{
				cout <<setw(3) <<get(i,j) <<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		for(int i = 0; i< rSIZE; i++)
		{
			cout <<setw(3) <<aPtr[i] <<" ";
		}
		cout<<endl;
	}
	void create()
	{
		for(int i = 0; i < SIZE; i++)
		{
			for(int j = 0; j < SIZE; j++)
			{
				set(i,j,abs((i-j)*(i+j)+SIZE));
			}
		}
	}
	~toeplitz()
	{
		delete [] aPtr;
	}
private:
	int SIZE;
	int rSIZE;
	int *aPtr;
};

int main()
{
	toeplitz t(6);
	t.create();
	t.display();
	return 0;
}