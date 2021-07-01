#include <iostream>

struct Node {
  int val;
  Node* next;
};

struct Node2 {
  int val;
  Node2 *next2;
};
// Èíèöèàëèçàöèè ýëåìåíòà îäíîñâÿçíîãî ñïèñêà íóëÿìè

void init(Node* node) {
	node->val = 0;
}

// Îòîáðàæåíèÿ îäíîñâÿçíîãî ñïèñêà íà ýêðàí
void show(Node* head) {
	Node *print = head;
	while (print != NULL)
	{
		cout << print->val << " ";
		print = print->next;
	}
	cout << endl;
}

// Äîáàâëåíèÿ ýëåìåíòà â îäíîñâÿçíûé ñïèñîê
void pushNode(Node* head,Node* node) {
	Node* element = head;
	while (element->next != NULL) element = element->next;
	element->next = new Node;
	element = element->next;
	element->val = node->val;
	element->next = NULL;
} 


// Íàïèñàòü ôóíêöèþ èíèöèàëèçàöèè size ýëåìåíòîâ ñïèñêà çàäàííûì çíà÷åíèåì val.
void initList(Node* head, int size, int val)  {

}

// Íàïèñàòü ôóíêöèþ êîïèðîâàíèÿ ýëåìåíòîâ ìàññèâà source â íîâûé ìàññèâ dest
void copyMas(Node* source, Node* dest) {

}
  

// Íàïèñàòü ôóíêöèþ ñðàâíåíèå ñïèñêîâ source è dest. Åñëè ñïèñêè ðàâíû 0, åñëè íå ðàâíû -1
int compareNodes(Node* source, Node2* dest) {
	Node *element1 = source;
	Node2 *element2 = dest;
	while ((element1 != NULL) and (element2 != NULL))
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


// Íàïèñàòü ôóíêöèþ óäàëåíèÿ ñî ñäâèãîì âëåâî n-ãî ýëåìåíòà ñïèñêà.
void deleteList(Node* head,int n) {

}


// Íàïèñàòü ôóíêöèþ ñäâèãà çíà÷åíèé âïðàâî íà n-ýëåìåíòîâ ñ çàïîëíåíèåì êðàéíèõ ýëåìåíòîâ íóëÿìè
void rShiftList(Node* head,int n) {

}



// Íàïèñàòü ôóíêöèþ ñäâèãà çíà÷åíèé âëåâî íà n-ýëåìåíòîâ ñ çàïîëíåíèåì êðàéíèõ ýëåìåíòîâ íóëÿìè.
void lShiftList(Node* head,int n) {

}


//Íàïèñàòü ôóíêöèþ ñäâèãà çíà÷åíèé âëåâî íà n-ýëåìåíòîâ ñ ïåðåíîñîì âûòåñíåííûõ ýëåìåíòîâ â êîíåö
void lRoundShiftMas(Node* head,int n, int size) {

}


// Íàïèñàòü ôóíêöèþ âû÷èñëåíèÿ ñðåäíåãî çíà÷åíèÿ ýëåìåíòîâ ñïèñêà.
int averageList(Node* head, int size) {
  return 0;
}



// Íàïèñàòü ôóíêöèþ âû÷èñëåíèÿ ñðåäíå êâàäðàòè÷åñêîãî îòêëîíåíèÿ ýëåìåíòîâ ñïèñêà.
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
