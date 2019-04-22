#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "printing.h"
#include "adding.h"
#include "deleting.h"
#include "save_to_file.h"
#include "read_from_file.h"

int main()
{
    contact* m_contact = NULL;

    int is = 1;
    if(is == 1){
        m_contact = loadContactsFromAFile("test.txt");
        printAllContacts(m_contact);
    }
    else{
        m_contact = addContact(m_contact);
        m_contact = addContact(m_contact);
        saveContacts("test.txt", m_contact);
        printAllContacts(m_contact);
    }

    return 0;
}
