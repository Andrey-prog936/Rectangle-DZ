#include <iostream>
using namespace std;

class Rectangle
{
 private:
	int height;
	int	weight;
	char simv;
	struct Coord
	{
		int X;
		int Y;
	};
	Coord cords;
	int size;
 public:
	Rectangle() // default constructor
	{
		cout << "Constructor (default)" << endl;
		height = 0;
		weight = 0;
		simv = '@';
		cords.X = 0;
		cords.Y = 0;
		size = 0;
	}
	Rectangle(int _size) : Rectangle() // parametrized constructor
	{
		cout << "Constructor (parametrized) 1" << endl;
		height = _size;
		weight = _size;
	}
	Rectangle(int _height, int _weight, char _simv) : Rectangle() // parametrized constructor
	{
		cout << "Constructor (parametrized) 2" << endl;
		height = _height;
		weight = _weight;
		simv = _simv;
	}
	void Print() const // method for show rectangle
	{
		for (int i = 0; i < cords.Y; i++)	{ cout << endl; }
		for (int i = 0; i < height; i++)
		{
			if (i == 0){for (int i = 0; i < cords.X; i++){ cout << " "; }	}
			for (int i = 0; i < weight; i++)	{	cout << simv;	}
			cout << endl;
			for (int i = 0; i < cords.X; i++)	{ cout << " "; }
		}
	}

	void Resize(int _height, int _weight) // method for resize rectangle
	{
		if (_height < 0 || _weight < 0)
		{
			cout << "Sizes CANNOT be negative numbers" << endl;
		}
		else
		{
			cout << "-=-RESIZING-=-" << endl;
			height = _height;
			weight = _weight;
		}
	}
	
	void Moving(int tempX, int tempY) // method for moving a rectangle
	{
		if (tempX < 0 || tempY < 0)
		{
			cout << "Coordinates CANNOT be negative numbers" << endl;
		}
		else
		{
			cout << "-=-MOVING-=-" << endl;
			cords.X = tempX;
			cords.Y = tempY;
		}
	}
};

int main() {
	Rectangle red(3, 4, '#');//create rectangle
	red.Print();			// print rectangle
	red.Resize(6,10);	   // resize rectangle
	red.Print();	      // print rectangle
	red.Moving(8, 4);    // moving rectangle
	red.Print();	    // print rectangle
	system("pause");   // command to delay console for earlier versions of Visual Studio
	return 0;         // command to complete work with the program
}