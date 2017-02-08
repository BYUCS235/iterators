#include <iostream>
#include <list>
#include <vector>
#include <iterator>
using namespace std;
list<int>::iterator find(list<int>& a_list, int target) {
    for (list<int>::iterator itr = a_list.begin();
      itr != a_list.end(); ++itr) {
        if (*itr == target)
          return itr;
    }
    return a_list.end();
}

int grub(list<int>& a_list, int target) {
    return a_list.back();
}
int main()
{
  int target = 15;
  list<int> ages;
  vector<int> vec_ages;
  vec_ages.push_back(5);
  vec_ages.push_back(10);
  vec_ages.push_back(15);
  vec_ages.push_back(20);
  for(int i = 0; i < vec_ages.size(); i++)
  {
    cout << vec_ages[i];
  }
  for(vector<int>::iterator itr = vec_ages.begin(); 
    itr != vec_ages.end(); itr++) {
      cout << *itr;
    }
    cout << endl;
  ages.push_back(5);
  ages.push_back(10);
  ages.push_back(15);
  ages.push_back(20);
  for(list<int>::iterator itr = ages.begin(); 
    itr != ages.end(); itr++) {
      cout << *itr;
  }
  list<int>::iterator found = find(ages, target);
  if(found != ages.end()) {
      cout << "Found "<< *found<<endl;
  }
  int grubby = grub(ages, target);
  cout <<"Grub "<< grubby<<endl;
  return(0);
}
