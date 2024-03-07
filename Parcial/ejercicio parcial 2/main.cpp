#include <iostream>

using namespace std;

int main()
{
    int j=0;
	for(int i=20; i>=0; i-=2){

		j+=i;
		if(j<10 && !(i%2))
                                                                                                                     {
			cout<<i<<endl;
		}
			if(j>10 && !(i%2)){
			cout<<j<<endl;
		}
	}


}
