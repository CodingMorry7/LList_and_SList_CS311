//INSTRUCTION
//Look for ** to complete all of them
//The output should match my assingment sheet

//=========================================================
//HW#: HW3P1 llist
//Your name: Chris Morikawa
//Complier:  g++
//File type: client program (tester)
//===========================================================

using namespace std;

#include <iostream>
#include "llist.h"

void caseOne()
{
  cout << "CASE 1:------------------- " << endl;
  llist L;   // this is my list
  el_t x = 0;  // to hold a removed element

  //1 check empty and report the result  
  cout << 1 << endl;
  L.isEmpty();
  //2 display the list  
  cout << 2 << endl;
  L.displayAll();
  //3 add 4 integers 1,2,3,4    
  cout << 3 << endl;
  L.addRear(el_t(1));
  L.addRear(el_t(2));
  L.addRear(el_t(3));
  L.addRear(el_t(4));
  //4 display the list  
  cout << 4 << endl;
  L.displayAll();
  //5 remove from front twice (and display the elements removed)
  cout << 5 << endl;
  L.deleteFront(x);
  L.deleteFront(x);
  //6 display the list
  cout << 6 << endl;
  L.displayAll();
  //7 check empty and report the result 
   cout << 7 << endl;
  L.isEmpty();
  //8 remove from the rear twice (display the element removed)
   cout << 8 << endl;
  L.deleteRear(x);
  L.deleteRear(x);
  //9 check empty again and report the result
   cout << 9 << endl; 
  L.isEmpty();
}//end of case 1 
 
void caseTwo()
{ 
  cout << "Case 2: -----------------------" << endl;
  llist L2;  // another list
  el_t x;   // to hold the removed element 
  int c = 1;  // displayed step number

  // 1.add to front once   (element 5)
  cout << c << endl; c++;
  L2.addFront(5);
  // 2.add to front again  (element 4)
  cout << c << endl; c++;
  L2.addFront(4);
  L2.displayAll();
  // 3.delete Front
  cout << c << endl; c++;
  L2.deleteFront(x);
  L2.displayAll();
  // 4.add to rear 3 times (elements 6,8,9)
  cout << c << endl; c++;
  L2.addRear(6);
  L2.addRear(8);
  L2.addRear(9);
  // 5. display all
  cout << c << endl; c++;
  L2.displayAll();
  // 6.add before the 1st  (element 4) . 4 5 6 8 9
  cout << c << endl; c++;
  L2.addbeforeIth(1,4);
  L2.displayAll();
  // 7.add before the 4th  (element 7) . 4 5 6 7 8 9
  cout << c << endl; c++;
  L2.addbeforeIth(4,7);
  L2.displayAll();
  // 8.add before the 7th  (element 10) . 4 5 6 7 8 9 10
  cout << c << endl; c++;
  L2.addbeforeIth(7,10);
  L2.displayAll();
  // 9.add before the 9th  (element 12) . error (out of range)
  cout << c << endl; c++;
  try
  {
    L2.addbeforeIth(9,12);
  } 
  catch(llist::OutOfRange)
  {
   cout << "Out of Range" << endl;
  }
  // 10.add before the 0th (element 0) . error (out of range)
  cout << c << endl; c++;
  try
  {
    L2.addbeforeIth(0,0);
  } 
  catch(llist::OutOfRange)
  {
   cout << "Out of Range" << endl;
  }
  // 11.displayAll
  cout << c << endl; c++;
  L2.displayAll();
  // 12.delete Ith I==1 (indicate  the element removed) . 5 6 7 8 9 10
  cout << c << endl; c++;
  L2.deleteIth(1,x);
  L2.displayAll();
  // 13.delete Ith I==6 (indicate the element removed)  - 5 6 7 8 9 
  cout << c << endl; c++;
  L2.deleteIth(6,x);
  L2.displayAll();
  // 14.delete Ith I==3 (indicate the element removed)  - 5 6 8 9
  cout << c << endl; c++;
  L2.deleteIth(3,x);
  L2.displayAll();
  // 15.delete Ith I==5 . error (out of range)
  cout << c << endl; c++;
  try 
  {
   L2.deleteIth(5,x); 
  }
  catch(llist::OutOfRange)
  {
   cout << "Out of Range" << endl; 
  }
  L2.displayAll();
  // 16.delete Ith I==0 . error (out of range)
  cout << c << endl; c++;
  try
  {
   L2.deleteIth(0,x);
  }
  catch(llist::OutOfRange)
  {
   cout << "Out of Range for zero" << endl;   
  }
  // 17.displayAll
  cout << c << endl; c++;
  L2.displayAll();
  // 18.delete from rear until it is empty (indicate the elements removed)
  cout << c << endl; c++;
  while(!L2.isEmpty())
  {
   L2.deleteRear(x);
   cout << "Element removed: " << x << endl;
  }
  // 19.displayAll  
  cout << c << endl; c++;
  L2.displayAll();

}//end of case 2

void caseThree()
{
  cout << "Case 3:-------------------- " << endl;
  llist L3;
  el_t x = 0;  // to hold the removed element

  // 1.add before the 0th . error (out of range)
  cout << "1" << endl;;
  try 
  {
    L3.addbeforeIth(0,0);
  }
  catch(llist::OutOfRange)
  {
   cout << "Out of Range" << endl;
  }
  //2.delete front . error (underflow)
  cout <<  "2" << endl;
  try
  {
   L3.deleteFront(x);
  }
  catch (llist::Underflow)
  {
   cout << "Underflow" << endl;
  }
}   //end of case 3

void caseFour()
{
  cout << "Case 4:------------------------ " << endl;
  llist L4;
  el_t x;  // to hold the removed element

  //   1.delete 2nd . error (out of range)
  cout << "1" << endl;
  try 
  {
   L4.deleteIth(2,x); 
  }
  catch (llist::OutOfRange)
  {
   cout << "Out of Range" << endl;
  }
  //    2.delete rear . error (underflow)
  cout << "2" << endl;
  try 
  {
   L4.deleteRear(x);
  }
  catch (llist::Underflow)
  {
   cout << "Underflow" << endl;
  }
} // end of case 4


//PURPOSE of the Program: **
//Algorithm/Design: 4 test cases are divided into 3 functions and **
int main()
{
  int selection; // this will indicate what the user wants to do
  
  do
    {
      cout << endl << "MENU: These are your options: " << endl << endl;
      cout << "   (1) Case 1  " << endl;
      cout << "   (2) Case 2  " << endl;
      cout << "   (3) Case 3  " << endl;
      cout << "   (4) Case 4 " << endl;
      cout << "    Enter ( 0 ) to quit " << endl;
      cout << "===>";
      
      cin >> selection;
      
      switch(selection)
	{
	case 1: caseOne(); break;
	case 2: caseTwo(); break;
	case 3: caseThree(); break;
	case 4: caseFour(); break;
	}
    }
  while(selection !=0);
return 0;
}// end of main

