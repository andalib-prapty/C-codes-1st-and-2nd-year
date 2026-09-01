//print power set of a set
#include <iostream>

void printSet(int array[],int size){
    int i;

    for (i=1;i<=size;i++)
        std::cout << array[i] << " ";
    std::cout << std::endl;

    return;
}

void printPowerset (int n){
    int stack[10],k;

    stack[0]=0; \
    k = 0;

    while(1){
        if (stack[k]<n){
            stack[k+1] = stack[k] + 1;
            k++;
        }

        else{
            stack[k-1]++;
            k--;
        }

        if (k==0)
            break;

        printSet(stack,k);
    }

    return;
}

int main(){

    printPowerset(4);

    return 0;
}



//power set

#include <bits/stdc++.h>
using namespace std;

vector<int> specific(vector<int> v)
{
    vector<int> A;

    for(int i=0; i < v.size(); i++)
    {
        bool b = true;
        for(int j = 0; j < A.size(); j++)
        {
            if(v[i] == A[j])
            {
                b = false;
            }
        }
        if(b) A.push_back(v[i]);
    }

    sort(A.begin(), A.end());
    return A;
}

vector<vector<int> > p_set;

void power(vector<int> &sub_set, int i, vector<int> &A)
{
    if(i == A.size())
    {
        p_set.push_back(sub_set);
        return;
    }

    // i-th element is not in sub_set
    power(sub_set, i+1, A);

    // i-th element in sub_set
    sub_set.push_back(A[i]);
    power(sub_set, i+1, A);

    sub_set.pop_back(); // backtracking
}

int main()
{
    int n, x;
    cout << "How many elements: ";
    cin >> n;

    vector <int> A;
    cout << "Enter the elements: ";
    for(int i = 0; i<n; i++)
    {
        cin >> x;
        A.push_back(x);
    }
    A = specific(A);

    vector<int> V;

    power(V, 0, A);


    cout << "{ ";
    int T = p_set.size();
    for(int j = 0; j < T - 1; j++)
    {
        vector<int> v = p_set[j];
        int t = v.size(), i;
        cout << "{ ";
        for(i = 0; i < t-1 ; i++)
        {
            cout << v[i] << ", ";
        }
        if(t)
            cout << v[i];
        cout << " }, ";
    }
    cout << "{ ";
    int k = p_set[T-1].size();
    for(int i = 0; i<k-1; i++)
        cout << p_set[T-1][i] << ", ";
    if(k)
        cout << p_set[T-1][k-1];
    cout << " }";
    cout << " }" << endl;

    return 0;
}
