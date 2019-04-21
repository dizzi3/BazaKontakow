#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "printing.h"
#include "adding.h"

int main()
{
    contact* m_contact = NULL;
    m_contact = addContact(m_contact);
    printAllContacts(m_contact);

    return 0;
}
