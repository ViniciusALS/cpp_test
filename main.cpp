#include <iostream>
#include <functional>

using namespace std;

int main(void){

	[out = ref(cout << "Hello ")](){out.get() << "World\n"; }();	

	return 0;
}
