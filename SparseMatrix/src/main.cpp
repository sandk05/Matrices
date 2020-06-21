#include <iostream>
#include <iomanip>
using namespace std;
class Element
{
public:
	int row;
	int col;
	int data;
};

class sparseMatrix
{
public:
	sparseMatrix(int r, int c, int n)
	{
		row = r;
		col = c;
		nZero = n;
		ele = new Element[nZero];
	}
	~sparseMatrix()
	{
		delete [] ele;
	}
	friend ostream & operator<<(ostream &os, sparseMatrix& sM)
	{
		int k = 0;
		for(int i = 0; i< sM.row; i++)
		{
			for(int j = 0; j < sM.col; j++)
			{
				if((sM.ele[k].row == i) && (sM.ele[k].col == j))
					cout <<setw(3) << sM.ele[k++].data <<" ";
				else
					cout <<setw(3) << "0" <<" ";
			}
			cout<<endl;
		}
		return os;
	}
	friend istream & operator>>(istream &is, sparseMatrix& sM)
	{
		cout <<"Enter row column and data of the element" <<endl;
		for(int i = 0; i < sM.nZero; i++)
		{
			cin >> sM.ele[i].row >> sM.ele[i].col >> sM.ele[i].data ; 
		}
		return is;
	}
	
private:
	int row;
	int col;
	int nZero;
	Element *ele;
};

int main()
{
	sparseMatrix sM(5, 5, 5);
	cin >> sM;
	cout <<sM;
	return 0;
}