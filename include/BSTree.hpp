namespace BSTree{
	struct Node{
		int data;
		Node* left;
		Node* right;
	};
	
	class Tree{
		Node* head;
		void remove(Node*& node);
	    public:
		Tree();
		bool insert(int value);
		~Tree();
	};
}	
