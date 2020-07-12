using namespace std;

// This is the class of the input root. Do not edit it.
class BinaryTree {
public:
	int value;
	BinaryTree* left;
	BinaryTree* right;

	BinaryTree(int value) {
		this->value = value;
		left = NULL;
		right = NULL;
	}
};

void calculatebranchsum(BinaryTree* root, int runningsum, vector<int>& branchsums);

vector<int> branchSums(BinaryTree* root) {
	// Write your code here.
	vector<int> branchsums;
	int runningsum;
	calculatebranchsum(root, 0, branchsums);
	return branchsums;
}

void calculatebranchsum(BinaryTree* node, int runningsum, vector<int>& branchsums) {
	if (node == NULL) return;
	runningsum = runningsum + node->value;
	if (node->left == NULL && node->right == NULL) {
		branchsums.push_back(runningsum);
	}
	calculatebranchsum(node->left, runningsum, branchsums);
	calculatebranchsum(node->right, runningsum, branchsums);
	//ILT do either iterative or recursive, generally recursive as it is much simpler
}
