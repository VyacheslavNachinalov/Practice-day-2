#include <iostream>

struct Node {
  int val;
  Node* next;
};

struct Node2 {
  int val;
  Node2 *next2;
};
// ������������� �������� ������������ ������ ������

void init(Node* node) {
	node->val = 0;
}

// ����������� ������������ ������ �� �����
void show(Node* head) {
	Node *print = head;
	while (print != NULL)
	{
		cout << print->val << " ";
		print = print->next;
	}
	cout << endl;
}

// ���������� �������� � ����������� ������
void pushNode(Node* head,Node* node) {
	Node* element = head;
	while (element->next != NULL) element = element->next;
	element->next = new Node;
	element = element->next;
	element->val = node->val;
	element->next = NULL;
} 


// �������� ������� ������������� size ��������� ������ �������� ��������� val.
void initList(Node* head, int size, int val)  {

}

// �������� ������� ����������� ��������� ������� source � ����� ������ dest
void copyMas(Node* source, Node* dest) {

}
  

// �������� ������� ��������� ������� source � dest. ���� ������ ����� 0, ���� �� ����� -1
int compareNodes(Node* source, Node2* dest) {
	Node *element1 = source;
	Node2 *element2 = dest;
	While ((element1 != NULL) and (element2 != NULL))
	{
		if(element1->val != element2->val)
		{
			return -1;
		}
		element1 = element1->next;
		element2 = element2->next2;
	}
  return 0;
}


// �������� ������� �������� �� ������� ����� n-�� �������� ������.
void deleteList(Node* head,int n) {

}


// �������� ������� ������ �������� ������ �� n-��������� � ����������� ������� ��������� ������
void rShiftList(Node* head,int n) {

}



// �������� ������� ������ �������� ����� �� n-��������� � ����������� ������� ��������� ������.
void lShiftList(Node* head,int n) {

}


//�������� ������� ������ �������� ����� �� n-��������� � ��������� ����������� ��������� � �����
void lRoundShiftMas(Node* head,int n, int size) {

}


// �������� ������� ���������� �������� �������� ��������� ������.
int averageList(Node* head, int size) {
  return 0;
}



// �������� ������� ���������� ������ ��������������� ���������� ��������� ������.
int skoFromList(Node* head, int size) {
  return 0;
}


int testSkoFromList() {
  return -1;
}


static void runTest(int (*testFunction)(),const std::string& testName)
{
  if(testFunction()==0)
    std::cout << "Test "<< testName << " - OK" << std::endl;
  else 
    std::cout << "Test "<< testName << " - FAIL" << std::endl;
}



int main() {
	Node *head = new Node;
	init(head);
	head->next = NULL;
    runTest(testSkoFromList,"testSkoFromList");


}
