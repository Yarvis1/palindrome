#include <iostream>
#include<cstring>
using namespace std;
int main(void){
char str[80];
char str2[80];
 char str3[80];
 int count =0;
 int count2=0;

 for(int i =80;i<80;i++){
   str[i]='\0';
   str2[i]='\0';
   str3[i]='\0';
 }
 cout << "enter a sentance"<< endl ;
cin.getline(str,80);
//for(int i =strlen(str) ;i>-1;i--){
//if(isalnum(str[i])!=0){
//  str2[count++]=str[i];
//  str2[count]=tolower(str2[count]);
//}
//}
  for(int i = 0;i<strlen(str);i++){
   if(isalnum(str[i]!=0)){
       str3[count2++]=str[i];
     }
 }

 if(strcmp(str3,str2)==0){
   cout<<"this is a palindrome"<<endl;
 }
 else{
   cout<<"not a palindrome"<< endl;
 }
 cout<<str3<<endl;
 //cout<<str2<<endl;
}
