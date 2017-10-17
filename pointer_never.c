int main ()
{
	int x, *p;
	x = 13;
	*p = x; //random address is equal to 13, correct: *p = &x;

	return (0);
}
