#include<iostream>
using namespace std;
int main()
{
   char letter ;
   cout<<"Enter a letter small or capital:";
   cin>>letter;
   cout<<"\t your letter is:%c"<<letter;
   if((letter>=65) && (letter<=90))
   {
       cout<<"\n\t your small letter is:"<<letter+32;
       cout<<"\n Your letter ASCII value is:"<<letter;
   }
   else if((letter>=97) && (letter<=122))
   {
       cout<<"\n\t your capital letter is:"<<letter-32;
       cout<<"\n Your letter ASCII value is:"<<letter;
   }
   else
   {
       cout<<"\n\tyour letter is not alfabate"<<letter;
   }
}