#include <iostream>
#include <iomanip>
using namespace std;

class symMat
{
public:
	symMat(int size)
	{
		SIZE = size;
		rSIZE = (SIZE*(SIZE +1))/2;
		aPtr = new int[rSIZE];
	}
	void set(int i, int j,int data)
	{
		if(i>=j)
		{
			
			//int val = (((2 * SIZE * j) - (j * j) + j))/2 + (i - j); //COLUMN MAJOR 	
		}
		else{
			int temp = i;
			i = j;
			j = temp;
		}
		int val = ((i *(i + 1))/2) + j ; //ROW MAJOR
		aPtr[val] = data;
	}
	int get(int i, int j)
	{
		if(i >= j)
		{
		;	
		}
		else{
			int temp = i;
			i = j;
			j = temp;
		}
		int val = ((i *(i + 1))/2) + j; //ROW MAJOR
			//int val = (((2 * SIZE * j) - (j * j) + j))/2 + (i - j); //COLUMN MAJOR
			return aPtr[val];
	}
	void display()
	{
		for(int i = 0; i< SIZE; i++)
		{
			for(int j = 0; j < SIZE; j++)
			{
				cout <<setw(3) <<get(i,j) <<" ";
			}
			cout <<endl;
		}
		for (int i = 0; i< rSIZE; i++)
			cout <<setw(3) << aPtr[i] <<" ";
		cout <<endl;
	}
	void create()
	{
		for(int i = 0; i < SIZE; i++)
		{
			for(int j = 0; j< SIZE; j++)
			{
				set(i,j,(i+j)+i);
			}
		}
	}
	~symMat()
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
	symMat symMat(6);
	symMat.create();
	symMat.display();
	return 0;
}