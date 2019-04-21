#ifndef _STRUCTURES_
#define _STRUCTURES_

#define DEFAULT_ARRAY_SIZE 128

typedef struct address_struct address_t;
typedef struct phone_struct phone_t;
typedef struct email_struct email_t;
typedef struct contact_struct contact;

typedef struct address_struct{

    char city[DEFAULT_ARRAY_SIZE];
    char street[DEFAULT_ARRAY_SIZE];
    int houseNumber;
    char zipCode[DEFAULT_ARRAY_SIZE];
    char postOffice[DEFAULT_ARRAY_SIZE];

} address_t;

typedef struct phone_struct{
    int phoneNumber;
    phone_t* next;
} phone_t;

typedef struct email_struct{
    char emailAddress[DEFAULT_ARRAY_SIZE];
    email_t* next;
} email_t;

typedef struct contact_struct{

    int ID;
    char name[DEFAULT_ARRAY_SIZE];
    char surname[DEFAULT_ARRAY_SIZE];
    address_t* address;
    phone_t* phoneHead;
    email_t* emailHead;
    contact* next;

} contact;

#endif
