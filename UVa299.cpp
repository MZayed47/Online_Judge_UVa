#include<iostream>
using namespace std;

int main(){
	int n,l;

	cin>>n;

	while(n--){
		cin>>l;
		int arr[l];

		for(int i=0; i<l; i++)
			cin>>arr[i];

		int count = 0;
		int temp;
		int c = l-1;

		while(c--){
			for (int i = 0; i < l - 1; i++) {
				if (arr[i] > arr[i+1]) {
					++count;
					temp = arr[i];
					arr[i] = arr[i+1];
					arr[i+1] = temp;
				}
			}
		}

		cout << "Optimal train swapping takes " << count << " swaps." << endl;
	}

	return 0;
}
