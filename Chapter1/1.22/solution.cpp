#include<iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
	Sales_item total;

	if (cin >> total)
	{
		Sales_item trans;
		int cnt = 1;
		while (cin >> trans)
		{
			if (trans.isbn() == total.isbn())
			{
				total += trans;
				++cnt;
			}
			else
			{
				cout << total.isbn() << "'s record:"
					<< total << endl;
				total = trans;
				cnt = 1;
			}
			cout << total.isbn() << "'s record:"
				<< total << endl;
		}
	}

	return 0;
}