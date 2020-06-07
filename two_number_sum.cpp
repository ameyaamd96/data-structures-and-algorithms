#include <vector>
#include <unordered_set>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
	vector<int> result;
	int numbertofind;
	unordered_set<int> set;
	for (int i = 0; i < array.size(); i++) {
		numbertofind = targetSum - array[i];
		if (set.find(numbertofind) != set.end()) {
			if (numbertofind < array[i]) {
				result.push_back(numbertofind);
				result.push_back(array[i]);
			}
			else {
				result.push_back(array[i]);
				result.push_back(numbertofind);
			}
		}
		else {
			set.insert(array[i]);
		}
	}
	return result;
}
//O(n) time and O(n) space complexity