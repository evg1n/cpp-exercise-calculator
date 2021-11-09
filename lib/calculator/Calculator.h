class Calculator
{
	private:
		double first, second, result;
	
	public:
		Calculator();
		void add();
		void subtract();
		void multiply();
		void divide();
		void setFirst(double);
		void setSecond(double);
		void getResult();
};