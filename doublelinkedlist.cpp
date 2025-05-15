// 0069_DoubLeLinkedList

#include <iostream>
#include <string>
using namespace std;

class Node
{
  public:
   int noMhs;
   Node *next;
   Node *prev;
};
class DoubLeLinkedList
{
private:
     Node *START;

public:
    DoubLeLinkedList()
  {
        START = NULL;
  }

  void addNode()
  {
     int nim;
     cout << "\nEnter the roll number of the student: ";
     cin >> nim;
  }
}
