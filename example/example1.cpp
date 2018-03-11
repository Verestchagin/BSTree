#include <iostream>
#include <set>
#include "BSTree.h"
using namespace std;
using namespace BSTree;

int main(int argc, char *argv[]){
	set<int> unique_set;
	set<int> mini_set;
	if (argc == 1) cout << "The tree is empty" << endl;
	if (argc > 1){
		for (int i = 1; i < argc; i++){
			mini_set.insert(atoi(argv[i]));
			unique_set.insert(atoi(argv[i]));
			unique_set.insert(atoi(argv[i]) + 1);
		}
		int n = int(mini_set.size());
		int a[n];
		for (int i = 0; i < n; i++) a[i] = 0;
		//set<int>::iterator ik;
		//for(ik = unique_set.begin(); ik != unique_set.end(); ik++)
        	//	cout << *ik << " ";
		for (int i = 0; i < argc - 1; i++){
			if (unique_set.find(atoi(argv[i + 1])) != unique_set.end()){
				a[i] = atoi(argv[i + 1]);
				unique_set.erase(atoi(argv[i + 1]));
			}
		}
		//for (int i = 0; i < n; i++) cout << a[i] << " ";
	}
	
	Tree *tree = new Tree;
	for (int i = 0; i < n; i++) tree->input(a[i]);
	
	string flag_exit = "no";
	while ((flag_exit != "y") && (flag_exit != "yes") && (flag_exit != "Yes") && (flag_exit != "YES")){
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
