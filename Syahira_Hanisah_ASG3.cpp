#include <iostream>
#include <fstream>
using namespace std;

int *expandArray(int arr[], int SIZE){
    int *newArr = new int [SIZE*2];
    
    for(int i=0; i < SIZE; i++){
        newArr[i] = arr[i];
    }
    
    for(int i=SIZE; i < SIZE*2; i++){
        newArr[i] = 0;
    }
    
    return newArr;
}

int main(){
    int N;
    int arr[50];
    ifstream inFile;
    
    cin >> N;
      if (N < 0 || N > 50)
      return 0;
    
    inFile.open ("data.txt");
    
    for(int i=0; i < N; i++){
        inFile >> arr[i];
    }
    inFile.close();
    
    
    int *expandArr = expandArray(arr, N);
    for (int i=0; i<N*2; i++){
        cout << expandArr[i] << endl;
    }
    
    delete[] expandArr;
    return 0;
    
}

