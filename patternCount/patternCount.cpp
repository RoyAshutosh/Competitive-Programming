// patternCount.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
using namespace std;
int main() {
  int l;
  cin >> l;
  int arr[100], brr[100];
  arr[0]=1; arr[1]=1;
  cout << "1" << endl;
  int count1 = 2;
  for(int i=0; i<l-1; i++) {
    for(int j=0; j<count1; j++)
        cout << arr[j];
    cout << endl;
    int c=1, j, count2=0;
    for(j=0; j<count1; j++) {
      if ( arr[j]==arr[j+1] )
          c++;
      else {
        brr[count2++] = c;
          brr[count2++] = arr[j];
          c=1;
      }
    }
    count1 = count2;
    for(j=0; j<count1; j++)
        arr[j] = brr[j];
  }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
