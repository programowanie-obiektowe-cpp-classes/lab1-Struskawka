class Wektor2D
{

	public:
	
	Wektor2D(){x=0;y=0;}
	Wektor2D(double xx, double yy){x=xx;y=yy;}
		
	void setx(double xx){x=xx;}
	void sety(double yy){y=yy;}
    double  getx()      {return x;}
	double  gety()      {return y;}

	private:
	double x, y;

};

Wektor2D operator+(Wektor2D w1, Wektor2D w2)
{
	return Wektor2D( w1.getx() + w2.getx(), w1.gety() + w2.gety() );
}

double operator*(Wektor2D w1, Wektor2D w2)
{
	return w1.getx() * w2.getx() + w1.gety() * w2.gety();
}