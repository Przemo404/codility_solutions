int solution(int N)
{
	int maxGap=0,gap=0,i,gapStart=0;
	for(i=0;i<31;i++)
	{
		if((N>>i)&1&&!((N>>(i+1))&1))
			gapStart=1;
		if(gapStart==1&&!((N>>(i+1))&1))
			gap++;
		if(gapStart==1&&((N>>(i+1))&1))
		{
			gapStart=0;
			if(gap>maxGap)
			{	
				
				maxGap=gap;
				
			}
			gap=0;
		}
		
		
	}
	return maxGap;	
}
