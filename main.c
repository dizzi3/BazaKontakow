#include <stdio.h>
#include <stdlib.h>

typedef struct contact_struct{

    int ID;
    char name[128];
    char surname[128];
    address_t* address;
    phone_t* phoneHead;
    email_t* emailHead;

}contact;

void printContact(contact* contact){
    printf("Id: %d", contact->ID);
    printf("Name: %s", contact->name);
    printf("Surname: %s", contact->surname);
    printAddress(contact->address);
    printPhone(contact->phoneHead);
    printEmail(contact->emailHead);
}

void printAddress(address_t address){
    printf("City: %s", address->city);
    printf("Street: %s", address->street);
    printf("House number: %d",address->houseNumber);
    printf("Zip code: %s", address->zipCode);
    printf("Post office: %s", address->postOffice);
}

void printPhone(phone_t* phoneHead){
    if(phoneHead->next == NULL)
        printf("Phone number: %d", phoneHead->phoneNumber);
    else{
        printf("Phone numbers:\n");
        int phoneNumberIterator = 1;

        phone_t* currentPhone = phoneHead;
        while(currentPhone != NULL){
            printf("%d) %d\n", phoneNumberIterator, currentPhone->phoneNumber);
            phoneNumberIterator++;
            currentPhone = currentPhone->next;
        }
    }
}

void printEmail(email_t* emailHead){
    if(emailHead->next == NULL)
        printf("Email address: %d", emailHead->emailAddress);
    else{
        printf("Emails:\n");
        int emailNumberIterator = 1;

        email_t* currentEmail = emailHead;
        while(currentEmail != NULL){
            printf("%d) %d\n", emailNumberIterator, currentEmail->emailAddress);
            emailNumberIterator++;
            currentEmail = currentEmail->next;
        }
    }
}

typedef struct address_struct{

    char city[128];
    char street[128];
    int houseNumber;
    char zipCode[6];
    char postOffice[128];

}address_t;

typedef struct phone_struct{
    int phoneNumber;
    phone_t* next;
}phone_t;

typedef struct email_struct{
    char emailAddress[128];
    email_t* next;
}email_t;

int main()
{

    return 0;
}
