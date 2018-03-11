namespace BSTree{
	struct Node{
		int data;
		Node* left;
		Node* right;
	};
	
	class Tree{
		Node* head;
	    public:
		Tree();
		bool input(int value);
		~Tree();
	};
}	
