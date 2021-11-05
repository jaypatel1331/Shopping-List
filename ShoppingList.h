/*********************************************************
 * Name: Jay Ashishbhai Patel
 * Student ID: 154925192
 * Seneca email: japatel31@myseneca.ca
 * Section: OOP 244 NGG
 * 
 * I have done all the coding by myself and only copied the code
 *  that my professor provided to complete my workshops and assignments.
 **********************************************************/

#ifndef sdds_ShoppingList_H // replace with relevant names
#define sdds_ShoppingList_H

namespace sdds
{
    bool loadList();
    void displayList();
    void removeBoughtItems();
    void removeItem(int index);
    bool saveList();
    void clearList();
    void toggleBought();
    void addItemToList();
    void removeItemfromList();
    bool listIsEmpty();
}

#endif