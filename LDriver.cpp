//****************************************************************************************************
//
//         File:                        LDriver.h
//
//         Student:                     Allison Coil
//
//         Assignment:                  Program  # 5
//
//         Course Name:                 Data Structures   I
//
//         Course Number:               COSC 3050 - 01
//
//         Due:                         Feb 26, 2021
//
//
//         This program demonstrates the function of the linked list from the LList class.
//		   
//
//****************************************************************************************************

#include <iostream>
using namespace std;

//****************************************************************************************************

#include "LList.h"

//****************************************************************************************************

int main ()
{
	LList <int> myList;
	int removed,
		retr,
		front,
		back;

	if ( myList.isEmpty () )
	{
		cout << "The list is empty." << endl << endl;
	}
	else
	{
		cout << "The list is not empty." << endl << endl;
	}

	if (myList.isFull())
	{
		cout << "The list is full." << endl << endl;
	}
	else
	{
		cout << "The list is not full." << endl << endl;
	}

	removed = 10;

	if ( myList.remove (removed) )
	{
		myList.display ();
		cout << endl << "NumValues: " << myList.getNumValues ();
		cout << endl << "Value removed: " << removed << endl << endl;
	}
	else
	{
		cout << "Unable to remove the value 10." << endl << endl;
	}

	retr = 15;

	if ( myList.retrieve (retr) )
	{
		cout << endl << "Value retrieved: " << retr << endl << endl;
	}
	else
	{
		cout << "Unable to retrieve the value 15." << endl << endl;
	}

	if ( myList.viewFront (front) )
	{
		cout << endl << "Front value: " << front << endl << endl;
	}
	else
	{
		cout << "Unable to retrieve the front value." << endl << endl;
	}

	if ( myList.viewRear (back) )
	{
		cout << endl << "Rear value: " << back << endl << endl;
	}
	else
	{
		cout << "Unable to retrieve the rear value." << endl << endl;
	}

	if ( myList.insert (5) )
	{
		myList.display ();
		cout << endl << "NumValues: " << myList.getNumValues ();
		cout << endl << endl;
	}
	else
	{
		cout << "Unable to insert the value 5." << endl << endl;
	}

	if ( myList.insert (3) )
	{
		myList.display ();
		cout << endl << "NumValues: " << myList.getNumValues ();
		cout << endl << endl;
	}
	else
	{
		cout << "Unable to insert the value 3." << endl << endl;
	}

	if ( myList.insert (9) )
	{
		myList.display ();
		cout << endl << "NumValues: " << myList.getNumValues ();
		cout << endl << endl;
	}
	else
	{
		cout << "Unable to insert the value 9." << endl << endl;
	}

	if ( myList.insert (7) )
	{
		myList.display ();
		cout << endl << "NumValues: " << myList.getNumValues ();
		cout << endl << endl;
	}
	else
	{
		cout << "Unable to insert the value 7." << endl << endl;
	}
	if ( myList.insert (4) )
	{
		myList.display ();
		cout << endl << "NumValues: " << myList.getNumValues ();
		cout << endl << endl;
	}
	else
	{
		cout << "Unable to insert the value 4." << endl << endl;
	}

	if ( myList.insert (8) )
	{
		myList.display ();
		cout << endl << "NumValues: " << myList.getNumValues ();
		cout << endl << endl;
	}
	else
	{
		cout << "Unable to insert the value 8." << endl << endl;
	}

	if ( myList.viewFront (front) )
	{
		cout << endl << "Front value: " << front << endl << endl;
	}
	else
	{
		cout << "Unable to retrieve the front value." << endl << endl;
	}

	if ( myList.viewRear (back) )
	{
		cout << endl << "Rear value: " << back << endl << endl;
	}
	else
	{
		cout << "Unable to retrieve the rear value." << endl << endl;
	}

	retr = 5;

	if ( myList.retrieve (retr) )
	{
		cout << endl << "Value retrieved: " << retr << endl << endl;
	}
	else
	{
		cout << "Unable to retrieve the value 5." << endl << endl;
	}

	retr = 1;

	if ( myList.retrieve (retr) )
	{
		cout << endl << "Value retrieved: " << retr << endl << endl;
	}
	else
	{
		cout << "Unable to retrieve the value 1." << endl << endl;
	}

	retr = 6;

	if (myList.retrieve(retr))
	{
		cout << endl << "Value retrieved: " << retr << endl << endl;
	}
	else
	{
		cout << "Unable to retrieve the value 6." << endl << endl;
	}

	retr = 20;

	if ( myList.retrieve (retr) )
	{
		cout << endl << "Value retrieved: " << retr << endl << endl;
	}
	else
	{
		cout << "Unable to retrieve the value 20." << endl << endl;
	}

	if ( myList.isEmpty () )
	{
		cout << "The list is empty." << endl << endl;
	}
	else
	{
		cout << "The list is not empty." << endl << endl;
	}

	if ( myList.isFull () )
	{
		cout << "The list is full." << endl << endl;
	}
	else
	{
		cout << "The list is not full." << endl << endl;
	}

	removed = 2;

	if (myList.remove(removed))
	{
		myList.display();
		cout << endl << "NumValues: " << myList.getNumValues();
		cout << endl << "Value removed: " << removed << endl << endl;
	}
	else
	{
		cout << "Unable to remove the value 2." << endl << endl;
	}

	removed = 6;

	if (myList.remove(removed))
	{
		myList.display();
		cout << endl << "NumValues: " << myList.getNumValues();
		cout << endl << "Value removed: " << removed << endl << endl;
	}
	else
	{
		cout << "Unable to remove the value 6." << endl << endl;
	}

	removed = 12;

	if (myList.remove(removed))
	{
		myList.display();
		cout << endl << "NumValues: " << myList.getNumValues();
		cout << endl << "Value removed: " << removed << endl << endl;
	}
	else
	{
		cout << "Unable to remove the value 12." << endl << endl;
	}

	removed = 3;

	if ( myList.remove (removed) )
	{
		myList.display ();
		cout << endl << "NumValues: " << myList.getNumValues ();
		cout << endl << "Value removed: " << removed << endl << endl;
	}
	else
	{
		cout << "Unable to remove the value 3." << endl << endl;
	}

	removed = 9;

	if ( myList.remove (removed) )
	{
		myList.display ();
		cout << endl << "NumValues: " << myList.getNumValues ();
		cout << endl << "Value removed: " << removed << endl << endl;
	}
	else
	{
		cout << "Unable to remove the value 9." << endl << endl;
	}

	removed = 5;

	if ( myList.remove (removed) )
	{
		myList.display ();
		cout << endl << "NumValues: " << myList.getNumValues ();
		cout << endl << "Value removed: " << removed << endl << endl;
	}
	else
	{
		cout << "Unable to remove the value 5." << endl << endl;
	}

	removed = 7;

	if ( myList.remove (removed) )
	{
		myList.display ();
		cout << endl << "NumValues: " << myList.getNumValues ();
		cout << endl << "Value removed: " << removed << endl << endl;
	}
	else
	{
		cout << "Unable to remove the value 7." << endl << endl;
	}

	removed = 4;

	if ( myList.remove (removed) )
	{
		myList.display ();
		cout << endl << "NumValues: " << myList.getNumValues ();
		cout << endl << "Value removed: " << removed << endl << endl;
	}
	else
	{
		cout << "Unable to remove the value 4." << endl << endl;
	}

	removed = 8;

	if ( myList.remove (removed) )
	{
		myList.display ();
		cout << endl << "NumValues: " << myList.getNumValues ();
		cout << endl << "Value removed: " << removed << endl << endl;
	}
	else
	{
		cout << "Unable to remove the value 8." << endl << endl;
	}

	if ( myList.isEmpty () )
	{
		cout << "The list is empty." << endl << endl;
	}
	else
	{
		cout << "The list is not empty." << endl << endl;
	}

	return 0;
}

/*
The list is empty.

The list is not full.

Unable to remove the value 10.

Unable to retrieve the value 15.

Unable to retrieve the front value.

Unable to retrieve the rear value.

5
NumValues: 1

3 5
NumValues: 2

3 5 9
NumValues: 3

3 5 7 9
NumValues: 4

3 4 5 7 9
NumValues: 5

3 4 5 7 8 9
NumValues: 6


Front value: 3


Rear value: 9


Value retrieved: 5

Unable to retrieve the value 1.

Unable to retrieve the value 6.

Unable to retrieve the value 20.

The list is not empty.

The list is not full.

Unable to remove the value 2.

Unable to remove the value 6.

Unable to remove the value 12.

4 5 7 8 9
NumValues: 5
Value removed: 3

4 5 7 8
NumValues: 4
Value removed: 9

4 7 8
NumValues: 3
Value removed: 5

4 8
NumValues: 2
Value removed: 7

8
NumValues: 1
Value removed: 4


NumValues: 0
Value removed: 8

The list is empty.
*/