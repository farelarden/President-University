
	int total=0;
	scanf("%c",&op);
	switch(op)
	{
		case'+':
		total=a+b;
		return total;
				
		case'-':
		total=a-b;
		return total;
		
		case'*':
		total=a*b;
		return total;
	
		case'/':
		total=a/b;
		return total;
				
		default:
		break;
	}
	
	return 0;


