#include <iostream>
using namespace std;
int main()
{
    //Array

    // marks[5]=marks[]
    int marks[] = {34, 44, 66, 77, 33};
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    marks[2] = 89; // can change the value of array
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;

    //Array with loops

    int score[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> score[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << score[i] << endl;
    }

    //2-D Array
    int arr[2][3] ={
        {1,2,3},
        {4,5,6}
    };
    for(int i=0;i<2;i++){
        for(int j=-0;j<3;j++){
            cout<<"Val at"<<i<<","<<j<<":"<<arr[i][j]<<endl;
        }
    }
    return 0;
}