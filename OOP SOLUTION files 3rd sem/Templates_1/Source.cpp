#include<iostream>
using namespace std;
//
//template< typename T > 
//void mySwap(T  a, T b)
//{
//	cout << "Hello";
//
//}
//
//template<>
//void mySwap<int>(int a, int  b)
//{
//	cout << "int";
//
//}
//
//void mySwap(int a, int  b)
//{
//	cout << "regular int";
//
//}


//
//template<>
//void mySwap<float>(float& a, float & b)
//{
//	cout << "float";
//
//}
//
//void mySwap(double & a)
//{
//
//}

//int main()
//{
//	int a = 9.7878787878, b = 8.898;
//	
//	mySwap(a,b);
//	return 0;
//}
	//error 
	/*
	
template< typename T, typename U > 
U my_cast(T t)
{
	T a = 67.7676;   // T type is int
	U b = 56.987;   //U type is double 

	cout << t<<":"<<a << ":" << b;
	return (U)t;  // U type will be converted to T type and will be returned 
} 

	int main() {
		int d = 10;
	//	int j = my_cast(d);  //Error   
		int i = my_cast < double > ( d );  
		cout  <<endl<<i;
// need to explicity mention about type of T (int in this case) as it is used only for      // return type not as parameter 

		return 0;
	}

	*/

	
	
//	
//template< typename T, typename U > 
//void my_cast(T t , U b)
//{
//	T a=8.78;
//	U f=98.89;
//	cout<<a << ":" << f<<endl;
//	cout << t << ":"  << b;
//	 // U type will be converted to T type and will be returned 
//} 


template< typename T, typename U >
T add(T t, U b)
{
	return t + b;
}

	int main() 
	{
		int a = 10;
		float b = 12.99;
		cout<<add(a, b);

		//my_cast <int,int>(4,5.454);



//		double d = 10.5674;
//	//	int j = my_cast(d);  //Error   
//		int i = my_cast< int >( d );  
//		cout  <<endl<<i;
//// need to explicity mention about type of T (int in this case) as it is used only for      // return type not as parameter 

		return 0;
	}


//	type change
	/*	
template< typename T, typename U > 
T my_cast(U u)
{
	T a =8.67657;   // T type is int
	U b = 7.898;   //U type is double 

	cout << u<<":"<<a << ":" << b;
	return (T)u;  // U type will be converted to T type and will be returned 
} 

	int main() {
		double d = 10.5674;
	//	int j = my_cast(d);  //Error   
		int i = my_cast< int >( d );  
		cout  <<endl<<i;
// need to explicity mention about type of T (int in this case) as it is used only for      // return type not as parameter 

		return 0;
	}
*/

	

