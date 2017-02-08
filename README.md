# iterators
Iterators can be used to access members of containers that have very different internal structures.  For example, a vector can be accessed through the [] operator, but this doesnt really make sense and would be difficult to implement for a list.  A for loop on a vector that might look like:
```c++
vector<int> vec_ages; 
for(int i = 0; i < vec_ages.size(); i++)
{
    cout << vec_ages[i];
}
```
Can be converted to use iterators
```c++
for(vector<int>::iterator itr = vec_ages.begin(); 
    itr != vec_ages.end(); itr++) {
      cout << *itr;
}
```
If you decide to use a list instead, then you can also use the same loop even though lists do not support the [] operator.
```c++
list<int> ages;
for(list<int>::iterator itr = ages.begin(); 
    itr != ages.end(); itr++) {
      cout << *itr;
}
```
Functions can return iterators. And if a function fails, it can return the iterator associated with the end of the container.
```c++
list<int>::iterator find(list<int>& a_list, int target) {
    for (list<int>::iterator itr = a_list.begin();
      itr != a_list.end(); ++itr) {
        if (*itr == target)
          return itr;
    }
    return a_list.end();
}
main()
{
    list<int>::iterator found = find(ages, target);
    if(found != ages.end()) {
      cout << "Found "<< *found<<endl;
    }
}
```
