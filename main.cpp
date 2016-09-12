//
//  main.cpp
//  
//
//  Created by Natalie Waller on 9/11/16.
//
//

#include <stdio.h>
#include LinkedList.cpp
#include <iostream>
using namespace std;

int main()
{
    cout << "\n\n\tA program that explains deletion of "
            << "\n\tnodes according to given constraints.";
    
    unorderedLinkedList<int> myList;
    
    cout << "\n\tInserting random numbers into the list.";
    
    myList.insertFirst(9);
    myList.insertFirst(7);
    myList.insertFirst(15);
    myList.insertLast(25);
    myList.insertFirst(11);
    myList.insertFirst(7);
    myList.insertFirst(17);
    myList.insertFirst(7);
    myList.insertFirst(77);
    
    cout << "\n\n\tThe elements in the list: ";
    myList.print();
    
    cout << "\n\tDeleting all occurences of the smallest element.";
    myList.deleteAllSmall();
    
    cout << "\n\n\tThe elements in the list: ";
    myList.print();
    
    cout << "\n\n\t";
    system("pause");
    return 0;
}
