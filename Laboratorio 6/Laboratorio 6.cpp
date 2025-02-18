#include <iostream>

using namespace std;

class Vehiculo {
private:
	string marca;
	string modelo;
	double precio;

public:
	Vehiculo(string, string, double);
	void mostrarInfo();
};

class Automovil : public Vehiculo {
public:
	Automovil(string mar, string mod, double pre) : Vehiculo(mar, mod, pre) {}
	void mostrarInfo();
};

class Motocicleta : public Vehiculo {
public:
	Motocicleta(string mar, string mod, double pre) : Vehiculo(mar, mod, pre) {}
	void mostrarInfo();
};

class Camioneta : public Vehiculo {
public:
	Camioneta(string mar, string mod, double pre) :Vehiculo(mar, mod, pre) {}
	void mostrarInfo();
};

Vehiculo::Vehiculo(string mar, string mod, double pre) {
	marca = mar;
	modelo = mod;
	precio = pre;
}
void Vehiculo::mostrarInfo() {
	cout << "Vehiculo:" << marca << " Modelo:" << modelo << " Precio:" << precio;
}
void Automovil::mostrarInfo() {
	Vehiculo::mostrarInfo();
	cout << " Puertas:4"<<endl;
}
void Motocicleta::mostrarInfo() {
	Vehiculo::mostrarInfo();
	cout << " Cilindraje:1000cc"<<endl;
}
void Camioneta::mostrarInfo() {
	Vehiculo::mostrarInfo();
	cout << " Capacidad :1.5 toneladas"<<endl;
}

class Cliente {
private:
	string nombre;
	int edad;
public:
	Cliente(string nom, int e) {
		nombre = nom;
		edad = e;
	}
	void mostrarInfo() {
		cout <<"Cliente:"<<nombre<<" Ha comprado un ";
	}
};

int main() {
	int opcion;
	int compra;
	Automovil auto1("Toyota Corolla", "2022", 25000);
	Motocicleta moto1("YamahaR1", "2021", 18000);
	Camioneta camioneta1("Ford Ranger", "2020", 30000);
	Cliente cliente1("Angel", 18);
	do {
		cout << "1- Vehiculos disponibles" << endl;
		cout << "2-Comprar Vehiculo" << endl;
		cout << "3-salir" << endl;
		cout << "Seleccione una opcion:";
		cin >> opcion;

		switch (opcion) {
		case 1:
			system("cls");
			auto1.mostrarInfo();
			moto1.mostrarInfo();
			camioneta1.mostrarInfo();
			break;
		case 2:
			cout << "Seleccione una opcion:";
			cin >> compra;
			switch (compra) {
			case 1:
				system("cls");
				cliente1.mostrarInfo();
				auto1.mostrarInfo();
				break;
			case 2:
				system("cls");
				cliente1.mostrarInfo();
				moto1.mostrarInfo();
				break;
			case 3:
				system("cls");
				cliente1.mostrarInfo();
				camioneta1.mostrarInfo();
			}
			break;
		case 3:
			cout << "Saliendo...";
			break;
		default:
			cout << "Opcion invalida pruebe de nuevo";
		}
	} while (opcion != 3);
	return 0;
}
