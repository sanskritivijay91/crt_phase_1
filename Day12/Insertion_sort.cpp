# include <iostream>
using namespace std;
 void swap_array (int &a, int &b ){   
    int temp = a;
    a = b;
    b = temp;
} 

void Insertion_sort(int nums[], int n )
{
    for (int i =1; i<n; i++)
    {
        int key = nums[i];
        int j = i-1;
        while (j >=0 && nums[j] > key)
        {
            nums[j + 1] = nums[j];
            j--;
        }
        nums[j+1] =key;;
    }
}


int main()
{   
    int arr[7] ={68,55,43,91,2,77,9};    
    int size = sizeof(arr) / sizeof(arr[0]);

    Insertion_sort(arr, size);
    for (int i = 0; i <size ; i++)
    {  
        cout << arr[i] << " ";  
    }
    
    return 0;     
}         