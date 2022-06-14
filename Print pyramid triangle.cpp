#include <iostream>
using namespace std;

int main()
{


	int space = 5;

		for (int i = 1; i < 5 ; i++)   // every iteration of this loop takes us to the next row.
		{


			for (int k = 0; k < space; k++)   // this loop prints spaces. we need more spaces at top, and lesser (-1)
			{							// spaces at each lower row before the stars (*)
				cout << " ";
			}
			space = space - 1;





			for (int j = 1; j < i + 1; j++)  // this loop prints more (+1) star after every row
			{
				cout << "* " ;
			}
		
			cout << "\n";




		}
	


}
