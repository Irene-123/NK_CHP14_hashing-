/*
I'm already considering the input array to be sorted
  TEST CASE 1:  WORST CASE
  1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30
  31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 51 52 52 53 53 54 54
  55 55 56 56 57 57 58 58 59 59 60 60 61 61 62 62 63 63 64 64 65 65 66 66 67 67 68 68
  69 69 70 70 71 71 72 72 73 73 74 74 75 75 75

  TEST CASE 2:
  1 2 3 4 5 6 7 8 9 10 10 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30
  31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 51 52 52 53 53 54 54
  55 55 56 56 57 57 58 58 59 59 60 60 61 61 62 62 63 63 64 64 65 65 66 66 67 67 68 68
  69 69 70 70 71 71 72 72 73 73 74 74 75

  TEST CASE 3:  BEST CASE
  1 1 1  2 3 4 5 6 7 8 9 10 10 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30
  31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 51 52 52 53 53 54 54
  55 55 56 56 57 57 58 58 59 59 60 60 61 61 62 62 63 63 64 64 65 65 66 66 67 67 68 68
  69 69 70 70 71 71 72 72 73 73 74 74 75

  */

/* PROBLEM STATEMENT:
  Given an array of 101 elements ,out of them 50 are distinct ,24 repeat twice and exactly 1 element appear 3 times .
  Find the element that appears thrice */

#include<iostream>
#include<map>
using namespace std;

int main(){
  map <int ,int >count;
  int arr[101];
  int n;
  for (int i=0;i<101;i++){
    cin>>arr[i];
    count[arr[i]]++;
  }
  map <int,int> :: iterator it;
  for (it=count.begin();it!=count.end();it++){
      cout<<it->first<<"->"<<it->second<<" ";
  }
  cout<<endl;
  cout<<"---------------------------------------------------------"<<endl;
  for (it=count.begin();it!=count.end();it++){
    if (it->second==3)
      cout<<it->first<<endl;
  }
  return 0;
}
