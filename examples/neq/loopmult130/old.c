int foo(int a, int b) {
	int c = 0;
	for (int i=0; i<b; ++i)
		c -= a;
	return c;}

int main(int x, char*argv[]) {
	if (x>=113 && x<147)
		return foo(x,130);
	return 0;}