class Wektor2D
{

	public:
	
	Wektor2D(){x=0;y=0;}
	Wektor2D(double xx, double yy){x=xx;y=yy;}
		
	void setX(double xx){x=xx;}
	void setY(double yy){y=yy;}
  double  getX()      {return x;}
	double  getY()      {return y;}

	private:
	double x, y;

};

Wektor2D operator+(Wektor2D w1, Wektor2D w2)
{
	return Wektor2D( w1.getX() + w2.getX(), w1.getY() + w2.getY() );
}

double operator*(Wektor2D w1, Wektor2D w2)
{
	return w1.getX() * w2.getX() + w1.getY() * w2.getY();
}