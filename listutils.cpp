#include <iostream>

using namespace std;
struct Node {
  int val;
  Node* next;
};

// Èíèöèàëèçàöèè ýëåìåíòà îäíîñâÿçíîãî ñïèñêà íóëÿìè

void init(Node* node) {
	node->val = 0;
	node->next = NULL;
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
int compareNodes(Node* source, Node* dest) {
	Node *element1 = source;
	Node *element2 = dest;
	while ((element1 != NULL) and (element2 != NULL))
	{
		if(element1->val != element2->val)
		{
			return -1;
		}
		element1 = element1->next;
		element2 = element2->next;
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

int testInit()
{
	Node *head = new Node;
	init (head);
	if (head->val != 0)
	{
		return -1;
	}
	return 0;
}

int testPushNode()
{
	Node *head = new Node;
	init(head);
	Node node{1};
	pushNode(head, &node);
	if ( (head->val != 0) or (head->next->val !=1) )
	{
		return -1;
	}
	return 0;
}
int testcompareNodes()
{
	Node *source = new Node;
	Node *dest = new Node;
	init (source);
	init (dest);
	Node node{1};
	Node node2{2};
	pushNode(source, &node);
	pushNode(dest,&node2);
	if (compareNodes(source,dest) == 0)
	{
		return -1;
	}
	return 0;
}

static void runTest(int (*testFunction)(),const std::string& testName)
{
  if(testFunction()==0)
    std::cout << "Test "<< testName << " - OK" << std::endl;
  else 
    std::cout << "Test "<< testName << " - FAIL" << std::endl;
}



int main() {
        runTest(testSkoFromList,"testSkoFromList");
	runTest(testInit,"testInit");
	runTest(testPushNode,"testPushNode");
	runTest(testcompareNodes,"compareNodes");
}
