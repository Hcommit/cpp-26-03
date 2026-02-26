// find the difference bw sum of even nums and sum of odd nums in vector
#include<iostream>
#include<vector>
using namespace std;

int main(){
 
    int n;
    int Teven=0,Todd=0;

    cout << "Enter the no of elements in array - ";
    cin >> n;

    vector<int> arr(n);
    cout<<"Enter "<<n<<" elemnts of vector "<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            Teven+=arr[i];
        }else{
            Todd+=arr[i];
        }
    }

    int difference=Teven-Todd;

    cout<<"The given array is - "<<endl;
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        
    }

    cout<<"Sum of odd is - "<<Todd<<endl;
    
    cout<<"Sum of even is - "<<Teven<<endl;
    cout<<"Difference is - "<<difference<<endl;
    return 0;
}