#include<iostream>
using namespace std;

int main(){
	int n,count=0;

	cin>>n;

	while(n--){
		int arr[10];

		for(int i=0; i<3; i++)
			cin>>arr[i];

		int temp;
		int c = 3-1;

		while(c--){
			for (int i=0; i<3-1; i++) {
				if (arr[i]>arr[i+1]) {
					temp = arr[i];
					arr[i] = arr[i+1];
					arr[i+1] = temp;
				}
			}
		}
        count++;
		cout << "Case " << count << ": " << arr[1] << endl;
	}

	return 0;
}
