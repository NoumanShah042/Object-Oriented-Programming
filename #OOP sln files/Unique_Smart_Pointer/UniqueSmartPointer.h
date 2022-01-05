#ifndef UNIQUE_SMART_POINTER_H
#define UNIQUE_SMART_POINTER_H


template < typename T >
class UniqueSmartPointer
{
	
	T * ptr;
public:
	
	

	UniqueSmartPointer(T * pValue = nullptr) : ptr(pValue)
	{

	}

	


	T* get()
	{
		return ptr;
	}

	T & operator*()
	{
		//return *(this->get());
		return *ptr;
	}

	T*operator->()
	{
		return ptr;
	}

	T * release()
	{
		if (!ptr)
		{
			return;
		}
		delete ptr;
		ptr = nullptr;

		return ptr;  // only re
	}
	
	void swap(UniqueSmartPointer<T> & pValue)
	{
		T * temp = pValue.get();

		pValue.setPtr(ptr);
		ptr = temp;
	}
	
/*
	void swap(UniqueSmartPointer<T> & pValue)
	{
		T * temp = pValue.get();
	
	    pValue.release();
		ptr = temp;
	}*/





	//bool operator 

	operator bool()
	{
		if (!ptr)
		{
			return false;
		}
		return true;
		
	}

	void setPtr(T*p)
	{
		ptr = p;
	}
	void reset(T*pValue = nullptr)
	{
		if (!pValue)
		{

			delete  ptr;
			ptr = nullptr;
			return;
		}

	
		delete ptr;
		ptr =  pValue;
		
	}


};






#endif