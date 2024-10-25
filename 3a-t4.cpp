#include<iostream>
using namespace std;
int main()
{
	int k, i = 1, sum_k = 0, number;
	while (true)
	{
		cout << " Enter the amount of integers to sum = "; cin >> k;
		if (k <= 0)
		{
			cout << "The operation is invalid. " << endl;
			cin.clear();
			cin.ignore(100, '\n');
			continue;
		}
		break;
	}
	do
	{
		cout << "Enter integer nr. " << i << ": ";
		cin >> number;
		if (!cin)
		{
			cout << "The operation is invalid. " << endl; cin.clear(); cin.ignore(10000, '\n');
			continue;
		}
		sum_k += number;
		i++;
	} while (i <= k);
	cout << " The total sum of " << k << " integers is: " << sum_k;
	return 0;
}
