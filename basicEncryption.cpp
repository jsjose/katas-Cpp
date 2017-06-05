string encrypt(string text, int rule) {
  char x;
  int i,j;

  if (text.length() > 0)
  {
  	for (i = 0; i < text.length(); ++i)
  	{
    	j = int(text[i])+rule;
    	x = char(j);
    	text[i] = x;
  	}  	
  }	

  return text;
};