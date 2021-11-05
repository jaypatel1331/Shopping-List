/*********************************************************
 * Name: Jay Ashishbhai Patel
 * Student ID: 154925192
 * Seneca email: japatel31@myseneca.ca
 * Section: OOP 244 NGG
 * 
 * I have done all the coding by myself and only copied the code
 *  that my professor provided to complete my workshops and assignments.
 **********************************************************/


#ifndef sdds_File_H // replace with relevant names
#define sdds_File_H

#include "ShoppingRec.h"

namespace sdds
{
    bool openFileForRead();
    bool openFileForOverwrite();
    void closeFile();
    bool freadShoppingRec(ShoppingRec* rec);
    void fwriteShoppintRec(const ShoppingRec* rec);
}
#endif