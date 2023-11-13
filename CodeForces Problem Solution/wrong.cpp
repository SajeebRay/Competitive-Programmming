#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define size 100
vector<float> default_array = {5,4.5,4,3.5,3,2.5,2,1.5,1,0.5,0,-0.5,-1,-1.5,-2,-2.5,-3,-3.5,-4,-4.5,5,4.5,4,3.5,3,2.5,2,1.5,1,0.5,0,-0.5,-1,-1.5,-2,-2.5,-3,-3.5,-4,-4.5,5,4.5,4,3.5,3,2.5,2,1.5,1,0.5,0,-0.5,-1,-1.5,-2,-2.5,-3,-3.5,-4,-4.5,5,4.5,4,3.5,3,2.5,2,1.5,1,0.5,0,-0.5,-1,-1.5,-2,-2.5,-3,-3.5,-4,-4.5,5,4.5,4,3.5,3,2.5,2,1.5,1,0.5,0,-0.5,-1,-1.5,-2,-2.5,-3,-3.5,-4,-4.5};
void binary_search(float value){
	sort(default_array.begin(), default_array.end());
	cout << "Sorted array is: ";
	for(auto x: default_array) cout << x << " ";
	cout << endl;
	int low = lower_bound(default_array.begin(), default_array.end(), value)-default_array.begin();
	int high = upper_bound(default_array.begin(), default_array.end(),value)-default_array.begin();
	if(low == size || high == 0) { //not found
		cout << "Not found" << endl;
	}
	else cout << "Value is present at: " << low+1 << " to " << high << endl;
}

int main()
{
	cout << "Traversing for -0.5 to 0.5: " << endl;
	for(int i = 0; i < size; i++){
		if(default_array[i] >= -0.5 && 0.5 >= default_array[i]) cout << "1 ";
		else cout << "0 ";
	}
	cout << endl;
	cout << "Now traversing for 3 to 4: " << endl;
	for(int i = 0; i < size; i++){
		if(default_array[i] >= 3 && 4 >= default_array[i]) cout << "1 ";
		else cout << "0 ";
	}
	cout << endl;
	cout << "Now traversing for -3 to -4: " << endl;
	for(int i = 0; i < size; i++){
		if(default_array[i] >= -4 && -3 >= default_array[i]) cout << "1 ";
		else cout << "0 ";
	}
	cout << endl;
	cout << "[Here 1 means present and 0 means not present]" << endl;
	
	float val;
	cout << "Enter the value which you search: ";
	cin >> val;
	cout << "For binary search, now array became sorted" << endl;
	binary_search(val);

	return 0;
}