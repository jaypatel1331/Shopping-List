/*********************************************************
 * Name: Jay Ashishbhai Patel
 * Student ID: 154925192
 * Seneca email: japatel31@myseneca.ca
 * Section: OOP 244 NGG
 * 
 * I have done all the coding by myself and only copied the code
 *  that my professor provided to complete my workshops and assignments.
 **********************************************************/


#ifndef sdds_ShoppingRec_H // replace with relevant names
#define sdds_ShoppingRec_H

const int MAX_TITLE_LENGTH = 50;
const int MAX_QUANTITY_VALUE = 50;

struct ShoppingRec {
   char m_title[MAX_TITLE_LENGTH + 1];
   int m_quantity;
   bool m_bought;
};

namespace sdds
{
    ShoppingRec getShoppingRec();
    void displayShoppingRec(const ShoppingRec* shp);
    void toggleBoughtFlag(ShoppingRec* rec);
    bool isShoppingRecEmpty(const ShoppingRec* shp);
}

#endif