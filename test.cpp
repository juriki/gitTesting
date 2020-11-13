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

int main(){
	const int n = 5;
	int array[n]={5,4,3,2,1};
	print("Hello World");
	bublesort(array,5);
	printArray(array,5);

 return 0;
}
