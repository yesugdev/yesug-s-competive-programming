#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node *left;
	node *right;
};

class BST{

private:
	node *root;

	node* insert(node *n, int element){
		if(n == nullptr){
			n = new node;
			n->data = element;
			n->left = nullptr;
			n->right = nullptr;
		}
		if(n->data > element){
			n->left = insert(n->left, element);

		}else if(n->data < element){
			n->right = insert(n->right, element);
		}
		return n;
	}

	void dfs(node* n, string prefix = "", bool isLeft = true, bool isRoot = true) {
    if (n == nullptr) {
        cout << prefix << (isLeft ? "├── " : "└── ")<< "no" << endl;
        return;
    }


    if (isRoot) {
        cout << n->data << endl;
    } else {
        cout << prefix << (isLeft ? "├── " : "└── ") << n->data << endl;
    }

    string newPrefix = prefix;
    if (!isRoot) {
        newPrefix += (isLeft ? "│   " : "    ");
    }

    if (n->left != nullptr || n->right != nullptr) {
        dfs(n->left, newPrefix, true, false);
        dfs(n->right, newPrefix, false, false);
    }
}



	node* findMin(node *n){
	while(n && n->left)
		n = n->left;
		return n; }


	node *remove(node *n, int element){
		if(n == nullptr){
			return nullptr;
		}
		if(element < n->data){
			n->left = remove(n->left, element);
		}else if(element > n->data){
			n->right = remove(n->right, element);
		}else{

			if(n->left == nullptr){
				node* temp =n->right;
				delete n;
				return temp;
			}else if(n->right == nullptr){
				node *temp = n->left;
				delete n;
				return temp;
			}

		node * successor = findMin(n->right);
		n->data = successor->data;
		n->right = remove(n->right, successor->data);

		}


		return n;
	}

public:
	BST(){
		root = nullptr;
	}
	void insert(int element){

		root = insert(root, element);
	}
	void remove(int element){
		root = remove(root, element);
	}
	void display(){
		dfs(root,"",false);
	}

};


int main(){

int n;
cin >> n;
vector<int> v(n);
for(int &el : v) cin >> el;
int hasah,nemeh;

cin >> hasah;
cin >> nemeh;
BST yesug;
for(auto el : v){
yesug.insert(el);
}
yesug.display();

yesug.remove(hasah);
yesug.display();

yesug.insert(nemeh);
yesug.display();

}