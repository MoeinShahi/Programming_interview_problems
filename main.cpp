#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int solution(vector<int> &arr){ //function time complexity O(n log n)

    sort(begin(arr),end(arr)); //time complexity O(n)
    int min=1;

    for(int i=0;i<arr.size();i++){
        while (arr[i]>0)
        {
            if(arr[i]==min){   //time complexity O(Log n)
                min++;
                break;
            }
            else if(arr[i]>min){
                return min;
            }
        }
        
    }
    return min;
}

int main(){
    vector<int> arr = {-1,-5,5,0,1,3,6,7,10};
    int res = solution(arr);
    for(int num:arr)
    cout<<num<<' ';
    cout<<'\n'<<res;

}