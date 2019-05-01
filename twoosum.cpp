#include <iostream> 
#include <climits> 
#include <cstdlib> 
using namespace std;

void printClosest(int arr[], int n, int x)

  {
	int res_l, res_r; 
	
	 
	int l = 0, r = n - 1, diff = INT_MAX;

	while (r > l)
	{
		if (abs(arr[l] + arr[r] - x) < diff)
		{
			res_l = l;
			res_r = r;
			diff = abs(arr[l] + arr[r] - x);
		}

		if (arr[l] + arr[r] > x)
			r--;
		else 
			l++;
	}

	cout << " The closest pair is " << res_l << " and " << res_r << endl;
}

int main()
{
	int i, x;
	int arr[5];
	cout << "Input your 5 elements" << endl;
	for (i = 0; i < 5; i++)
		cin >> arr[i];
	cout << "Whats your target" << endl;
	cin >> x;
	int n = sizeof(arr) / sizeof(arr[0]);
	printClosest(arr, n, x);

	system("pause");
	return 0;
}