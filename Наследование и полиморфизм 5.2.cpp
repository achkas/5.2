// Наследование и полиморфизм 5.2

#include <iostream>
#include <string>
#include <windows.h>

class Triangle
{

protected:

	int side_a, side_b, side_c;
	int angle_A, angle_B, angle_C;
	std::string name;

public:

	Triangle() {
		side_a =10;
		side_b = 20;
		side_c = 30;
		angle_A = 50;
		angle_B = 60;
		angle_C = 70;
		name = "Треугольник: ";
	}

	int get_side_a() {

		return side_a;			
	}

	int get_side_b() {

		return  side_b;			
	}

	int get_side_c() {

		return  side_c;
	}

	int get_angle_A() {

		return 
			angle_A;		
	}

	int get_angle_B() {

		return
			 angle_B;		
	}

	int get_angle_C() {

		return 
			 angle_C;		
	}


	std::string get_name() {

		return name;
	}	

	void print_info(Triangle*) {

	std::cout << get_name() << std::endl
	<< "Стороны: "<<"a=" <<get_side_a()<<" "<<"b="<< get_side_b()<<" "<< "c="<<get_side_c()<<std::endl
	<< "Углы: "<<"A=" <<get_angle_A()<<" "<<"B="<< get_angle_B()<<" "<<"C="<< get_angle_C()<<std::endl;
	}
};


class RightTriangle :public Triangle {

public:

	RightTriangle() {		
		angle_C = 90;
		name = "Прямоугольный треугольник: ";
	}
};

class IsoscelesTriangle :public Triangle {

public:

	IsoscelesTriangle() {		
		side_c = 10;		
		angle_C = 50;
		name = "Равнобедренный треугольник: ";
	}
};

class EquilateralTriangle :public Triangle {

public:

	EquilateralTriangle() {
		side_a = 30;
		side_b = 30;		
		angle_A = 60;		
		angle_C = 60;
		name = "Равносторонний треугольник: ";
	}
};


class quadrilateral
{

protected:

	int side_a, side_b, side_c, side_d,
		angle_A, angle_B, angle_C, angle_D;
	std::string name;

public:

	quadrilateral() {
		side_a = 10;
		side_b = 20;
		side_c = 30;
		side_d = 40;
		angle_A = 50;
		angle_B = 60;
		angle_C = 70;
		angle_D = 80;
		name = "Четырёхугольник: ";
	}
	int get_side_a() {

		return side_a;
	}

	int get_side_b() {

		return  side_b;
	}

	int get_side_c() {

		return  side_c;
	}

	int get_side_d() {

		return  side_d;
	}

	int get_angle_A() {

		return
			angle_A;
	}

	int get_angle_B() {

		return
			angle_B;
	}

	int get_angle_C() {

		return
			angle_C;
	}

	int get_angle_D() {

		return
			angle_D;
	}


	std::string get_name() {

		return name;
	}

	void print_info(quadrilateral*) {

		std::cout << get_name() << std::endl
			<< "Стороны: " << "a=" << get_side_a() << " " << "b=" << get_side_b() << " " << "c=" << get_side_c() << " " << "d=" << get_side_d() << std::endl
			<< "Углы: " << "A=" << get_angle_A() << " " << "B=" << get_angle_B() << " " << "C=" << get_angle_C() << " " << "D=" << get_angle_D() << std::endl;
	}
};

class square :public quadrilateral {

public:

	square() {
		side_a = 20;
		side_b = 20;
		side_c = 20;
		side_d = 20;
		angle_A = 90;
		angle_B = 90;
		angle_C = 90;
		angle_D = 90;
		name = "квадрат: ";
	}
};

class rectangle :public square  {

public:

	rectangle():square() {
		side_a = 10;		
		side_c = 10;		
		name = "Прямоугольник: ";
	}
};

class parallelogram :public quadrilateral {

public:

	parallelogram() {
		side_a = 20;
		side_b = 30;
		side_c = 20;
		side_d = 30;
		angle_A = 30;
		angle_B = 40;
		angle_C = 30;
		angle_D = 40;
		name = "Параллелограмм: ";
	}
};


class rhombus :public parallelogram {

public:

	rhombus() :parallelogram() {
		side_a = 30;		
		side_c = 30; 		
		name = "Ромб: ";
	}
};


int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Triangle t;
	RightTriangle r;
	IsoscelesTriangle i;
	EquilateralTriangle e;	
		
	t.print_info(&t);
	std::cout << std::endl;
	r.print_info(&r);
	std::cout << std::endl;
	i.print_info(&i);
	std::cout << std::endl;
	e.print_info(&e);
	std::cout << std::endl;

	quadrilateral w;
	square s;
	rectangle rec;
	parallelogram par;
	rhombus rho;

	w.print_info(&w);
	std::cout << std::endl;
	s.print_info(&s);
	std::cout << std::endl;
	rec.print_info(&rec);
	std::cout << std::endl;
	par.print_info(&par);
	std::cout << std::endl;
	rho.print_info(&rho);
	
	return 0;
}