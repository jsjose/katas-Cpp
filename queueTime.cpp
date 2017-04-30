long queueTime(std::vector<int> customers,int n){
	long p = 0, i;

	while !(customers.empty() == 0)
	{
		for (i = n-1; i = 0; i--)
		{
			if ((customers.size()+1) > i) customers[i]--;
			if (customers[i] == 0) customers[i].erase;			
		}
		p++;	
	}
return p;
}