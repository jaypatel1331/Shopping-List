/*********************************************************
 * Name: Jay Ashishbhai Patel
 * Student ID: 154925192
 * Seneca email: japatel31@myseneca.ca
 * Section: OOP 244 NGG
 * 
 * I have done all the coding by myself and only copied the code
 *  that my professor provided to complete my workshops and assignments.
 **********************************************************/

#ifndef sdds_Utils_H // replace with relevant names
#define sdds_Utils_H

namespace sdds
{
    void flushkeys();
    bool ValidYesResponse(char ch);
    bool yes();
    void readCstr(char cstr[], int len);
    int readInt(int min, int max);
}

#endif