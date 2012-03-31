// Generates the first 10 numbers of the Fibonacci sequence and then returns the last one.
int main(void)
{
	int i;
	int array[10];

	// Base cases.
	array[0] = 1;
	array[1] = 1;
	
	// Generate the rest of the sequence.
	for(i = 2; i <= 10; i++)
	{
		array[i] = array[i - 1] + array[i - 2];
	}

	return array[9];
}
