#include "header1.h"
#include "header2.h"

namespace header1 {
	int func() {
		foo();
	}
}

namespace header1 {
	int func() {
		foo();
		header2::foo();
	}
}

int	func() {
	header1::foo();
}

using header1::foo;
int main(){
	foo();
}

using namespace header1;
int main(){
	foo();
	bar();
	header2::foo();
}

