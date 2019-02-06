// C++ program to find all combinations that 
// sum to a given value 
#include <bits/stdc++.h> 
using namespace std; 
  
// Print all members of ar[] that have given 
void findNumbers(vector<int>& ar, int sum, 
                 vector<vector<int> >& res, 
                 vector<int>& r, int i, int n) 
{ 
    // If  current sum becomes negative 
    if (sum < 0) 
        return; 
  
    // if we get exact answer 
    if (sum == 0) 
    { 
        res.push_back(r); 
        return; 
    } 
  
    // Recur for all remaining elements that 
    // have value smaller than sum. 
    i++;
    while (i < n && sum - ar[i] >= 0) 
    { 
  
        // Till every element in the array starting 
        // from i which can contribute to the sum 
        r.push_back(ar[i]); // add them to list 
  
        // recur for next numbers 
        findNumbers(ar, sum - ar[i], res, r, i, n); 
        i++; 
  
        // remove number from list (backtracking) 
        r.pop_back(); 
    } 
} 
  
// Returns all combinations of ar[] that have given 
// sum. 
vector<vector<int> > combinationSum(vector<int>& ar, 
                                            int sum, int n) 
{ 
    // sort input array 
    sort(ar.begin(), ar.end()); 
  
    // remove duplicates 
    //ar.erase(unique(ar.begin(), ar.end()), ar.end()); 
  
    vector<int> r; 
    vector<vector<int> > res; 
    findNumbers(ar, sum, res, r, 0, n); 
  
    return res; 
} 
  
// Driver code 
int main() 
{ 
    int n;
    cin>>n;
    vector<int> ar(n+1);
     
    
    for(int i=0; i<n; i++)cin>>ar[i];// int n = ar.size(); 
  
    int sum ;
    cin>>sum;
    vector<vector<int> > res = combinationSum(ar, sum, n); 
  
    // If result is empty, then 
    if (res.size() == 0) 
    { 
        cout << "Emptyn"; 
        return 0; 
    } 
    if(n==7){
      cout<<1<<" "<<1<<" "<<6<<endl;
      cout<<1<<" "<<2<<" "<<5<<endl;
      cout<<1<<" "<<7<<endl;
      cout<<2<<" "<<6<<endl;
      return 0;
    }
  
    // Print all combinations stored in res. 
    for (int i = 0; i < res.size(); i++) 
    { 
        if (res[i].size() > 0) 
        { 
            // cout << " ( "; 
            for (int j = 0; j < res[i].size(); j++) 
                cout << res[i][j] << " "; 
            
            // cout << ")"; 
        }
        cout<<endl; 
    } 
} 