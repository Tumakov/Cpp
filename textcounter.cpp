/*
*   textcounter.cpp
*   Простая программа для подсчета количества слов в файле
*   Автор: Илья Дубков (http://github.com/dubkov)
*   Дата создания: 16.02.2015
*/

//подключаем заголовочные файлы для работы с файлами
#include <iostream>
#include <fstream>

//используем стандартное пространство имен
using namespace std;

int main(){
  //открываем файл для чтения
  ifstream inputFile("text.txt");
  //задаем буфер, в который читается слово
  char readWord[64];
  //заводим счетчик слов
  int wordCounter = 0;
  int test = 0;

  //бесконечный цикл
while(true){
    //читаем слово в буфер
    inputFile >> readWord;
    //если прочитали конец файла, выходим из цикла
    if (inputFile.eof()) break;
    //увеличиваем счетчик
    wordCounter++;
  }
  //выводим количество слов
  cout << wordCounter;
  //закрываем файл
  inputFile.close();
  //возвращаем 0
  return 0;
}
