#include <iostream>
#include <vector>
using namespace std;


class Differ
{
	vector <int> numberList;
public:
	Differ(vector <int> newNumberList)
	{
		numberList = newNumberList;
	}
	bool areElementsUnique()
	{
		for (int i = 0; i < numberList.size(); i++)
		{
			for (int j = i + 1; j < numberList.size(); j++)
			{
				if (numberList[i] == numberList[j]) return false;
			}
		}
		return true;
	}
};

int main()
{
	vector <int> listOfNumbers;
	int size;
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		int num;
		cin >> num;
		listOfNumbers.push_back(num);
	}
	Differ d(listOfNumbers);
	if (d.areElementsUnique()) cout << "Elements are unique" << endl;
	else cout << "Elements are not unique" << endl;
}

