#ifndef BASIC_VECTOR_H
#define BASIC_VECTOR_H

template <typename T>
class BasicVector {
	private:
		T* a;
		int capacity;

	public:
		BasicVector(int capacity = 10);
		int append(T value);

		T& operator[](int i) {
			return a[i];
		}

		void println();
};

#endif
