#include "structures.h"
#include <stdio.h>

address_t* loadAddress(FILE* file);
phone_t* loadPhoneNumbers(FILE* file, int nPhoneNumbers);
email_t* loadEmails(FILE* file, int nEmails);
contact* loadContactsFromAFile(char* filename);
