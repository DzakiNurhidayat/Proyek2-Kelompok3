#ifndef AKUN_H
#define AKUN_H

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cstring>
using namespace std;

typedef struct
{
    char username[30];
    char password[30];
    char pertanyaan[30];
    char jawaban[30];
} User;


string Register();
string Login();
void gantiPassword();
void loadPasswordsFromFile(string loggedInUser);



#endif