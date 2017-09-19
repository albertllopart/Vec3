#ifndef CLASS_VEC3
#define CLASS_VEC3

typedef unsigned int uint;


template <class TYPE>
class Vec3
{
private:

	TYPE* vec = nullptr;
	uint capacity = 1;
	uint elements = 0;

public:

	Vector()
	{
		vec = new TYPE[capacity];
	}

	Vector(uint size)
	{
		capacity = size;
		vec = new TYPE[size];
	}

	
	~Vector()
	{
		delete[]vec;
	}

	TYPE& operator[](int i)const
	{
		assert(i < elements);
		return vec[i];
	}


	uint Size() const
	{
		return elements;
	}
	uint Capacity() const
	{
		return capacity;
	}
	bool Empty() const
	{
		return elements == 0;
	}
	void clear()
	{
		elements = 0;
	}

};

#endif
