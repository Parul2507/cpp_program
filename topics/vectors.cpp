#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> v; // declaration

    v.push_back(1);     // for pushing the values these two function can be used 
    v.emplace_back(2);  // emplace_back is faster than push back

    vector <pair <int, int>> v1;
    v1.push_back({1, 2});
    v1.emplace_back(1, 2); // no need to put {} in empace_back

    vector <int> v2(5, 100); // this will create a vector v2 of size 5 with 100 as its element like {100, 100, 100, 100, 100}
    vector <int> v3(3);

    vector <int> v4(v2); // this will make a copy of v2 in v4

    vector <int> :: iterator it = v2.begin(); // this points to the memory of the first element of the vector
    it++;                                      // this is used for traversing
    cout << *(it) << " ";                       // dereferancing before printingl
    cout << endl;

    vector <int> vec = {1, 2, 3, 4, 5};
    for(vector<int> :: iterator i = vec.begin(); i != vec.end(); i++)  // we can also use auto here instead of writing vect..iterator 
    {
        cout << *i << " ";
    }

    //  for each loop
    // for(auto it : vec)
    // {
    //     cout << it << endl;
    // }


    // Deleting elementfrom the vector
    //{10, 20, 30, 40, 50}
    // vec.erase(vec.begin()+1);  {10, 30, 40, 50}

    //{10, 20, 30, 40,50}
    // vec.erase(vec.begin()+3, vec.begin()+4); {10, 20, 30}


    // // Insertion
    // vector<int> vc = {1, 2, 3};
    // vc.insert(vc.begin(), 0);  this will become {0, 1, 2, 3}
    // vc.insert(vc.begin(), 2, 100) this will become {100, 100, 0, 1, 2, 3}

    // vector<int> copy(2, 50);   {50, 50}
    // vc.insert(v.begin(), copy.begin(), copy.end()); {50, 50, 100, 100, 0, 1, 2, 3}

    // vc.pop_back()  delete the last element of vector
    // vc.clear() delete the entire vector
    // vc.size() tells the size of vector
    // vc.empty() return true if the vector is empty else return false

    // v1->{1, 2}
    // v2->{3, 4}
    // v1.swap(v2) v1->{3, 4} and v2->{1, 2}
}
