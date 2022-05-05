int fatorial(int a){
	int x = a;
	for(int i=a; i>1; i--){
		x *= (i-1);
	}
	return x;
}



float potencia(float b, int exp)
{
	float r = b;
	for(int i=1;i<exp;i++)
	{
		r *=b;
	}
	return r;
}



float expressao (int c){
	int y = 0;
	int j = 2;
	for(int i=5;i>=j;i--){
		y += fatorial(i) * potencia(c,i-j);
	}
	return y;
}


float expressao (float c){
	int y = 0;
	int j = 2;
	for(int i=5;i>=j;i--){
		y += fatorial(i) * potencia(c,i-j);
	}
	return y;
}