#include <ostream>
#include "List.h"

template <typename T>
class ListArray : public List<T> {

	private:
	       	//miembros privados
	       	T* arr;
		int max;
 		int n;
		static const int MINSIZE;
		
		void resize(int new_size);		

	
	public:
		//miembros públicos, incluidos los heredados de List<T>
		ListArray(){
				arr = new T(MINSIZE);
				max = MINSIZE;
				n = 0;

		}
		~ListArray(){
			delete[] arr;
		}

		T operator[](int pos){
			if(pos < 0 || pos >= n)
				throw std::out_of_range("Indice fuera de rango");
			return arr[pos];
		}

		friend std::ostream& operator<<(std::ostream &out, const ListArray<T> &list) {
     		   	for (int i = 0; i < list.n; ++i) {
            			out << list.arr[i] << " ";
        		}
        		return out;
    		}

		//Metodos heredados de List<T>




};
