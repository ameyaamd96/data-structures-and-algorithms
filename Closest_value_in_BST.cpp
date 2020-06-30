class BST {
public:
	int value;
	BST* left;
	BST* right;

	BST(int val);
	BST& insert(int val);
};
int closestValue = INT_MAX;
int findClosestValueInBst(BST* tree, int target) {
	BST* currentnode = tree;
	while (currentnode != NULL) {
		if (abs((currentnode->value) - target) < abs(closestValue - target)) {
			closestValue = currentnode->value;
		}
		if (target < (currentnode->value)) {
			currentnode = currentnode->left;
		}
		else if (target > (currentnode->value)) {
			currentnode = currentnode->right;
		}
		else {
			break;
		}
	}
	return closestValue;
}