#include <iostream>


const int MASSIZE = 1000;
int mas[MASSIZE];

// Вариант 0:
// Написать функцию инициализации size элементов массива заданным значением val.
void initByZeroMas(int* imas, int size)  {

  if(size>MASSIZE)
    size=MASSIZE; 
  for(int i=0;i<size;i++) {
    mas[i]=0;
  }
}



// Вариант 1:
// Написать функцию инициализации size элементов массива заданным значением val.
void initMas(int* imas, int size, int val)  {

}

//Вариант 2:
// Написать функцию копирования size элементов массива source в массив dest

void copyMas(int* source,int* dest, int size) {

}
  

//Вариант 3:
//Написать функцию сравнение size элементов массивов  source и dest. Если массивы равны 0, если не равны -1

int compareMas(int* source,int* dest, int size) {
	for (int i = 0; i<size; i++)
	{
		if (source[i] != dest[i])
			{
				return -1;
			}
	}
  return 0;
}

//Вариант 4:
//Написать удаления со сдвигом влево n-го элемента массива. Пустой элемент справа заполняется нулями.
void deleteFromMas(int* source,int n, int size) {

}

// Вариант 5:
// Написать функцию сдвига вправо на n-элементов с заполнением крайних элементов нулями

void rShiftMas(int* source,int n, int size) {

}



// Вариант 6:
// Написать функцию сдвига влево на n-элементов с заполнением крайних элементов нулями
void lShiftMas(int* source,int n, int size) {

}


// Вариант 7:
// Написать функцию сдвига влево на n-элементов с переносом вытесненных элементов в конец
void lRoundShiftMas(int* source,int n, int size) {

}


// Вариант 8:
// Написать добавление в начал списка со сдвигом вправо элементов массива. Лишний элемент справа пропадает.
void pushToMas(int* source,int val, int size) {

}



// Вариант 8:
// Написать функцию вычисления среднего значения элементов массива.
int averageMas(int* source, int size) {
  return 0;
}

// Вариант 9:
//Написать функцию вычисления средне квадратического отклонения элементов массива.
int SkoFromMas(int* source, int size) {
  return 0;
}


// Тесты

// Вариант 0:
// Написать функцию инициализации size элементов массива заданным значением val.
int testInitByZeroMas() {
  // Протестировать ....
  // initByZeroMas(int* imas, int size)
  return 0;
}




// Вариант 1:
// Написать функцию инициализации size элементов массива заданным значением val.

int testInitMas()  {
  return -1;
}

//Вариант 2:
// Написать функцию копирования size элементов массива source в массив dest

int testCopyMas() {
  return -1;
}
  

//Вариант 3:
//Написать функцию сравнение size элементов массивов  source и dest. Если массивы равны 0, если не равны -1

int testCompareMas() {
  return -1;
}

//Вариант 4:
//Написать удаления со сдвигом влево n-го элемента массива. Пустой элемент справа заполняется нулями.
int testDeleteFromMas() {
  return -1;
}

// Вариант 5:
// Написать функцию сдвига вправо на n-элементов с заполнением крайних элементов нулями

int testrShiftMas() {
  return -1;
}



// Вариант 6:
// Написать функцию сдвига влево на n-элементов с заполнением крайних элементов нулями
int testlShiftMas() {
  return -1;
}


// Вариант 7:
// Написать функцию сдвига влево на n-элементов с переносом вытесненных элементов в конец
int testlRoundShiftMas() {
  return -1;
}


// Вариант 8:
// Написать добавление в начал списка со сдвигом вправо элементов массива. Лишний элемент справа пропадает.
int testPushToMas() {
    return -1;
}


// Вариант 8:
// Написать функцию вычисления среднего значения элементов массива.
int testAverageMas() {
  return -1;
}

// Вариант 9:
//Написать функцию вычисления средне квадратического отклонения элементов массива.
int testSkoFromMas() {
  return -1;
}


void runTest(int (*testFunction)(),const std::string& testName){
  if(testFunction()==0)
    std::cout << "Test "<< testName << " - OK" << std::endl;
  else 
    std::cout << "Test "<< testName << " - FAIL" << std::endl;
}



int main() {
   int source[] = {1,1,2,3,5,8,13,21,34,55,89};
   int dest[] = {1,1,2,3,5,8,13,21,34,55,89};
   cout << "Result of comparing is " << compareMas(source,dest,10) << endl;
   runTest(testInitByZeroMas,"testInitByZeroMas");
   runTest(testInitMas,"testInitMas");
   runTest(testCopyMas,"testCopyMas");

   runTest(testCompareMas,"testCompareMas");
   runTest(testSkoFromMas,"testSkoFromMas");
}

