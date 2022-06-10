#include <iostream>
using namespace std;
int main ()
{
    int i, j, temp, arr[5] ;
    //cout << "Enter unsorted array : \n" ;

    //cin>>i;
    cout << "Enter unsorted array : \n" ;
    for(i=0; i<5; i++)
    {
        cin>>arr[i];
    }

    for( i=0; i<5; i++) {
        cout << arr[i] << "\t";
    }
    cout <<endl;

     for(i=0; i<5; i++) {
        for(j = i+1; j<5; j++)
            {
            if(arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
     }
    cout << "sorted elements : \n";
    for( i=0; i<5; i++)
    {
        cout<<arr[i] << "\t";
    }
return 0;
}
