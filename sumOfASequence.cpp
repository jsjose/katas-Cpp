int sequenceSum(int start, int end, int step)
{
	int i, j;

	if (start > end)
  		return 0;
  	else 
  	{
  		i = start;
      j = 0;
  		while (i <= end)
  		{
  			j = j + i;
  			i = i + step; 
  		}
  		return j;
  	}
}