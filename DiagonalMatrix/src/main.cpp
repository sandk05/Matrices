#include <iostream>
#include <iomanip>
using namespace std;
class DiagonalMatrix
{
public:
	DiagonalMatrix(int Size)
	{
		this->Size = Size;
		aPtr = new int[Size];
	}
	~DiagonalMatrix()
	{
		delete [] aPtr;
	}
	void set(int i, int j, int data)
	{
		if (i == j)
			aPtr[i] = data;
	}
	int get(int i, int j)
	{
		if(i == j)
			return aPtr[i];
		else
			return 0;
	}
	void display()
	{
		for(int i = 0; i< Size; i++)
		{
			for(int j = 0; j< Size; j++)
			{
				cout <<setw(3) <<get(i,j) <<" ";
			}
			cout<<endl;
		}
	}
	void create()
	{
		for(int i = 0; i < Size; i++)
		{
			for(int j = 0; j< Size; j++)
			{
				set(i, j, rand()%100);
			}
		}
	}

private:
	int Size;
	int* aPtr;
};
int main()
{
	DiagonalMatrix dm(6);
	dm.create();
	dm.display();
}