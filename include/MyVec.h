#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

template <typename forvec>
class MyVec
{
    private:
        size_t data_size; // размер 
        forvec *data; // данные + указатель на начало, аналогично C
    public:
        MyVec(forvec temp) {
            data_size = 0;    
            data = nullptr;
        }

        void push(forvec val)
        {
            forvec *new_data = new forvec[data_size+1];
            for(int i=0; i<data_size; i++) new_data[i] = data[i];
            new_data[data_size] = val;
            data_size++;
            delete[] data;
            data = new_data;
        }

        void pop()
        {
            forvec *new_data = new forvec[data_size-1];
            for(int i=0; i<data_size-1; i++) new_data[i] = data[i];
            delete[] data;
            data = new_data;
        }
        forvec top()
        {
            return data[data_size-1];
        }

        void print()
        {
            for(int i=0; i<data_size; i++) cout << data[i] << " ";
            cout << "\n";
        }

        size_t size()
        {
            return data_size;
        }
};
