#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
	int opcion;
	bool menu = true;

	// TRADUCCIONES
	auto t1 = "-- MENU DE ACTIVACION/DESACTIVACION DEL FIREWALL DE WINDOWS --              Discord: Sonk#2333\n";
	auto texpl = "Este menu se ha hecho para hacer mas facil la tarea de activar y desactivar el Firewall de Windows.\n\n";
	auto t2 = "(1) Activar Firewall de Windows (Req. Admin).\n";
	auto t3 = "(2) Desactivar Firewall de Windows (Req. Admin).\n";
	auto t4 = "(3) Salir.\n\n";
	auto ti = "Introduce la opcion a realizar: ";
	auto terror = "Error.";
	auto tc1 = "Si has ejecutado este archivo como administrador:\n\t- El Firewall de Windows se ha ACTIVADO correctamente.\n";
	auto tc2 = "Si has ejecutado este archivo como administrador:\n\t- El Firewall de Windows se ha DESACTIVADO correctamente.\n";

	do {
		system("cls");
		cout << "\t  __^__                                      __^__\n";
		cout << "\t ( ___ )------------------------------------( ___ )\n";
		cout << "\t  | / |                                      | \  |\n";
		cout << "\t  | / |       MENU FIREWALL DE WINDOWS       | \  |\n";
		cout << "\t  |___|                                      |___|\n";
		cout << "\t (_____)------------------------------------(_____) \n";
		cout << "                        Discord: Sonk#2333             \n\n";
		cout << texpl << t2 << t3 << t4 << ti;
		cin >> opcion;

		switch (opcion) {
			case 1:
				system("cls");
				system("netsh advfirewall set currentprofile state on");
				system("cls");
				cout << t1 << tc1;
				system("pause");
				menu = false;
				break;
			case 2:
				system("cls");
				system("netsh advfirewall set currentprofile state off");
				system("cls");
				cout << t1 << tc2;
				system("pause");
				menu = false;
				break;
			case 3:
				menu = false;
				break;
			default:
				system("cls");
				cout << terror;
				system("pause>nul");
				break;
		}
	} while (menu);

	return 0;
}