#include<bits/stdc++.h>
using namespace std;
struct mm{
    int min; int max;
};
struct mm getmm(int arr[]){
    struct mm minmax;
    //base case
    if (n == 1)
    {
        minmax.max = arr[0];
        minmax.min = arr[0];    
        return minmax;
    }
     
    // If there are more than one elements,
    // then initialize min and max
    if (arr[0] > arr[1])
    {
        minmax.max = arr[0];
        minmax.min = arr[1];
    }
    else
    {
        minmax.max = arr[1];
        minmax.min = arr[0];
    }
    for(i=2; i<arr.size(); i++){
        if(arr[i] > minmax.max) minmax.max = arr[i];
        else if(arr[i] < minmax.min) minmax.min = arr[i];
      
    }  return minmax;
}
int main()
{
    int arr[] = { 1000, 11, 445,
                  1, 330, 3000 };
    int arr_size = 6;
     
    struct Pair minmax = getMinMax(arr);
     
    cout << "Minimum element is "
         << minmax.min << endl;
    cout << "Maximum element is "
         << minmax.max;
          
    return 0;
}