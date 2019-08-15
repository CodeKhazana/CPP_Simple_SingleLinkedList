/*-----------------------------------------------------------------------------*
* Project:   SingleLinkedList
* File:      SingleLinkedList_main.cpp
* Author:    Sanjay Vyas 
* 
* Description:
*    Program to test SingleLinkedList
*
* Revision History:
*    2018-November-06:  Initial Creation
*    2019-August-15:    Fixed Comments  
* 
* Copyright (c) 2018 CodeKhazana
* 
* License:
*    This code is meant for students, to learn algorithms and clean coding
*    Do not copy-paste it, it may not help in understanding the code
*    You are required to understand the code and then type it yourself
*
* Disclaimer:
*    This code may contain intentional and unintentional bugs
*    There are no warranties of the code working correctly
*----------------------------------------------------------------------------*/

#include <iostream>
#include <cctype>
#include "SingleLinkedList.h"
using namespace std;

int main()
{
    int userval;
    List myList;

    while (cout << "Enter a value (0 to stop): ",
           cin >> userval,
           userval)
    {
        char where;
        bool added;

        cout << "Add to (B) or (F): ";
        cin >> where;

        if (toupper(where) == 'B')
        {
            added = myList.pushBack(userval);
            if (!added)
                cerr << "Error: could not add value" << endl;
        }

        else if (toupper(where) == 'F')
        {
            added = myList.pushFront(userval);
            if (!added)
                cerr << "Error: could not add value" << endl;
        }

        else
        {
            cerr << "Error: Value not added. Please specify B or F" << endl;
        }
    }
    myList.printForward();
    return 0;
}
