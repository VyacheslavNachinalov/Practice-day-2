#include <iostream>

struct Node {
  int val;
  Node* next;
};

struct Node2 {
  int val;
  Node2 *next2;
};
// Инициализации элемента односвязного списка нулями

void init(Node* node) {
	node->val = 0;
}

// Отображения односвязного списка на экран
void show(Node* head) {
	Node *print = head;
	while (print != NULL)
	{
		cout << print->val << " ";
		print = print->next;
	}
	cout << endl;
}

// Добавления элемента в односвязный список
void pushNode(Node* head,Node* node) {
	Node* element = head;
	while (element->next != NULL) element = element->next;
	element->next = new Node;
	element = element->next;
	element->val = node->val;
	element->next = NULL;
} 


// Написать функцию инициализации size элементов списка заданным значением val.
void initList(Node* head, int size, int val)  {

}

// Написать функцию копирования элементов массива source в новый массив dest
void copyMas(Node* source, Node* dest) {

}
  

// Написать функцию сравнение списков source и dest. Если списки равны 0, если не равны -1
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


// Написать функцию удаления со сдвигом влево n-го элемента списка.
void deleteList(Node* head,int n) {

}


// Написать функцию сдвига значений вправо на n-элементов с заполнением крайних элементов нулями
void rShiftList(Node* head,int n) {

}



// Написать функцию сдвига значений влево на n-элементов с заполнением крайних элементов нулями.
void lShiftList(Node* head,int n) {

}


//Написать функцию сдвига значений влево на n-элементов с переносом вытесненных элементов в конец
void lRoundShiftMas(Node* head,int n, int size) {

}


// Написать функцию вычисления среднего значения элементов списка.
int averageList(Node* head, int size) {
  return 0;
}



// Написать функцию вычисления средне квадратического отклонения элементов списка.
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
