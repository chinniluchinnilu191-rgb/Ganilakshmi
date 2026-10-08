#include<iostream>
using namespace std;
class sampletemplate
{
	public:
		template <class T>
        T max value(T a,T b)
        {
        	return(a>b)? a:b;
		}
};
main()
{
	sampletemplate st;
	
	cout<<"max Value is:"<<st.maxvalue(10,20)<<end];
	cout<<"max Value is:"<<st.maxvalue(10,5f,20.5f)<<end];
	cout<<"max Value is:"<<st.maxvalue(10,55,20.5s)<<end];
};

