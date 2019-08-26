// A simple C++ program to group multiple occurrences of individual 
// array elements 
#include<iostream> 
using namespace std; 

// A simple method to group all occurrences of individual elements 
void groupElements(int arr[], int n) 
{ 
	// Initialize all elements as not visited 
	bool *visited = new bool[n]; 
	for (int i=0; i<n; i++) 
		visited[i] = false; 

	// Traverse all elements 
	for (int i=0; i<n; i++) 
	{ 
		// Check if this is first occurrence 
		if (!visited[i]) 
		{ 
			// If yes, print it and all subsequent occurrences 
			cout << arr[i] << " "; 
			for (int j=i+1; j<n; j++) 
			{ 
				if (arr[i] == arr[j]) 
				{ 
					cout << arr[i] << " "; 
					visited[j] = true; 
				} 
			} 
		} 
	} 

	delete [] visited; 
} 

/* Driver program to test above function */
int main() 
{ 
	int arr[100],n,i; 
    cin>>n;
    for(i=0;i<n;i++)
      cin>>arr[i];
	groupElements(arr, n); 
	return 0; 
} 
