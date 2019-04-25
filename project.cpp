#include<iostream>
#include<string.h>
#include<conio.h>

#define max 100

using namespace std;

//Class Customer
class Customer
{
public:
char name[100];
char address[100];
char phone[12];
char from_date[20];
char to_date[20];
float payment_advance;
int booking_id;
};
