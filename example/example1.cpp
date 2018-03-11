#include <iostream>
#include <set>
#include "bstree.h"

using namespace std;
using namespace BSTree;

void print_menu(){
	cout << endl;
	cout << "Select one of the operations:" << endl;
	cout << "1. Print tree" << endl;	
	cout << "2. Print list of nodes" << endl;
	cout << "3. Add node" << endl;
	cout << "4. Delete node" << endl;
	cout << "5. Save the tree to file" << endl;
	cout << "6. Load the tree from file" << endl;
	cout << "7. Check node availability" << endl;
	cout << "8. End the program" << endl;
}

struct buffer{
	int* ptr;
	int size;
};

buffer parse_cmd(int argc, char *argv[]){
	int n;
	set<int> unique_set;
	set<int> mini_set;
	for (int i = 1; i < argc; i++){
		mini_set.insert(atoi(argv[i]));
		unique_set.insert(atoi(argv[i]));
		unique_set.insert(atoi(argv[i]) + 1);
	}
	n = int(mini_set.size());
	int *a = new int[n]{0};
	for (unsigned int i = 0; i < argc - 1; i++){
		if (unique_set.find(atoi(argv[i + 1])) != unique_set.end()){
			a[i] = atoi(argv[i + 1]);
			unique_set.erase(atoi(argv[i + 1]));
		}
	}
	return buffer{a, n};
}

void apply_actions(Tree& tree){
	string flag_exit = "no";
	while ((flag_exit != "y") && (flag_exit != "yes") && (flag_exit != "Yes") && (flag_exit != "YES")){
		print_menu();
		int ch;
        cin >> ch;
		switch(ch){
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				break;
			case 8:
				cout << "Do you want to leave program?" << endl;
				cin >> flag_exit;
				break;
		}
	}
	cout << "Good bye!" << endl;
}

int main(int argc, char *argv[]){
	if (argc == 1){
		 cout << "The tree is empty" << endl;
		 return 1;
	}
	buffer massive = parse_cmd(argc, argv);;
	Tree tree;
	for (unsigned int i = 0; i < massive.size; i++){
		tree.insert(massive.ptr[i]);
	}
	apply_actions(tree);
}
	
