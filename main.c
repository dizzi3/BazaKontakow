#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "printing.h"
#include "adding.h"
#include "deleting.h"

int main()
{
    contact* m_contact = NULL;
    m_contact = addContact(m_contact);
    m_contact = addContact(m_contact);
    m_contact = addContact(m_contact);
    deleteContact(m_contact);
    printAllContacts(m_contact);

    return 0;
}
