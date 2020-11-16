#include <iostream>

void print(const char a[]){
std::cout<<a<<"\n";
}
void printArray(int array[], int len){
    for (int i = 0; i < len; i++) {
       std:: cout << array[i] << ", ";
    }std::cout<<"\n";
    
}

void bublesort(int array[], int n){
	int a;
        for(int i = 0; i < n; ++i){
                for(int j = 0; j < n-1; ++j){
                    if(array[j] > array[j+1]){
                        a = array[j];
                        array[j] = array[j+1];                       
			array[j+1] = a;
                       }
}
}
}

void arrayRevers (int array[], int len){
	int a;
	for(int i = 0; i <len; ++i){
        	 len--;
       		 a = array[i];
       		 array[i] = array[len];
       		 array[len] = a;
}
}
void arrayAdding(int array[], int len, int len2){
	
	for(int i = 0; i < len2; ++i){
		array[i] = len--;
}

}

int main(){


	int n;
	std::cout<<"Give a Array lengh :  ";
	std::cin>>n;
	int array[n];
	arrayAdding(array, n, n);
	printArray(array, n);
	arrayRevers(array, n);
	printArray(array, n);
 return 0;
}
