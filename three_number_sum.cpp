#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeNumberSum(vector<int> array, int targetSum) {
	// Write your code here.
	int left, right, currentsum;
	vector<vector<int>> triplets;
	sort(array.begin(), array.end());
	for (int i = 0; i < array.size() - 2; i++) {
		left = i + 1;
		right = array.size() - 1;
		while (left < right) {
			currentsum = array[i] + array[left] + array[right];
			if (currentsum < targetSum) {
				left++;
			}
			else if (currentsum > targetSum) {
				right--;
			}
			else {
				triplets.push_back({ array[i],array[left],array[right] });
				left++;
				right--;
			}
		}
	}
	return triplets;
}
