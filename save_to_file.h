#include "structures.h"

#include <stdio.h>

//zapisuje kontakty do pliku
//filename - sciezka pliku do zapisu
//head - pierwszy element listy kontaktow
void saveContacts(char* filename, contact* head);

void saveAddress(FILE* file, contact* cont);

int getNOfPhoneNumbers(contact* cont);
