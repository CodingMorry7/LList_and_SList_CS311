//INSTRUCTION
//Look for ** to complete all of them
//The output should match my assingment sheet

//=========================================================
//HW#: HW3P3 slist
//Your name: Chris Morikawa
//Complier:  g++
//File type: client program (tester)
//===========================================================

using namespace std;
#include <iostream>
#include "slist.h"

//PURPOSE: This function simply tests the copy constructor of the slist class
//and adds 6 to a the rear of copiedList and displays the list
//PARAMETER: list passed by value becomes copiedList
void CopyTest(slist copiedList, int input)
{
  slist lt(copiedList);
  cout << "in copy test" << endl;
  lt.addRear(input);
  lt.displayAll();
  cout << "finished" << endl;
}

//PURPOSE of the Program: To test out each function of the copied constructor
// and the overload assignment operator.
//Algorithm/Design: Initialize two linked list. Add 6 elements into the first linked list.
//Next have L1 assigned to L1. Then for L2 add 7-10 into it. Next make L2 become L1, and take
// out the last element from L1. Finally, display all elemenst from both L1 and L2. 
int main()
{
  slist L1, L2;
  int temp;
  int counter = 1;

 //1.Create a 5 element list with  1,2,3,4,5 (L1)
  cout << counter << endl; counter++;
  L1.addRear(1);
  L1.addRear(2);
  L1.addRear(3);
  L1.addRear(4);
  L1.addRear(5);
  //2.Pass the list to a client function called CopyTest to 
  //test your copy constructor.
  cout << counter << endl; counter++;
  CopyTest(L1, 6);
  cout << "-- After copytest --- " << endl;
  //3.Display L1 (this should still be a 5 element list)
  cout << counter << endl; counter++;
  L1.displayAll();
  cout << "-- Testing operator overloading ---" << endl;

  //4.Do L1 = L1;
  cout << counter << endl; counter++;
  L1 = L1;
  //5.Display L1    (this should still be 1 2 3 4 5)
  cout << counter << endl; counter++;
  L1.displayAll();
  //6.Create a 4 element list L2 with 7,8,9,10.
  cout << counter << endl; counter++;
  L2.addRear(7);
  L2.addRear(8);
  L2.addRear(9);
  L2.addRear(10);
  //7.Display L2
  cout << counter << endl; counter++;
  L2.displayAll();
  //8.Do L2 = L1;  (L2 becomes 5 elements 1,2,3,4,5)
  cout << counter << endl; counter++;
  L2 = L1;
  //9.Display L2.
  cout << counter << endl; counter++;
  L2.displayAll();
  //10.Remove a rear node from L1. (This should not affect L2).
  cout << counter << endl; counter++;
  L1.deleteRear(temp);
  //11.Display L1.   (L1 is 1,2,3,4)
  cout << counter << endl; counter++;
  L1.displayAll();
  //12.Display L1 again. (4 elements . just to make sure)
  cout << counter << endl; counter++;
  L1.displayAll();
  //13.Display L2 again. (still 5 elements 1,2,3,4,5)
  cout << counter << endl; counter++;
  L2.displayAll();

 return 0;
 }//end of program

