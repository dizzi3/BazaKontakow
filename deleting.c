#include "deleting.h"
#include <stddef.h>

contact* deleteContact(contact* head){
    if(head == NULL){
        printf("There are no contacts to delete!\n");
        return NULL;
    }

    printAllContacts(head);

    int id;
    printf("\n\nPrint id of the contact that you want to delete: ");
    scanf("%d", &id);

    contact* currentContact = head;
    contact* previousContact = NULL;
    while(currentContact->ID != id && currentContact != NULL){
        previousContact = currentContact;
        currentContact = currentContact->next;
    }

    if(currentContact == NULL)
        printf("Found no contacts with id %d!\n", id);
    else{

        //Usuwanie glowy listy
        if(previousContact == NULL){
            currentContact = currentContact->next;
            free(head);
            head = currentContact;
        }else{
            previousContact->next = currentContact->next;
            free(currentContact);
        }

        printf("Contact deleted successfully!\n");
    }

    return head;
}
