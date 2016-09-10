#include<iostream>
#include<cstring>
using namespace std;

const char* yo(char* str){
  //return strlen(str);
  return str;
}

int main(){
  char str1[100];
  char str2[100];
  strcpy(str1,"Hello there");
  cout << yo(str1);
}
