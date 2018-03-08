#include <iostream>
#include <set>
using namespace std;

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
		for (int i = 0; i < n; i++) cout << a[i] << " ";
		
	}
}
	
