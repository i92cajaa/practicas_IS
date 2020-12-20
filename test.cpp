#include "cute.h"
#include "ide_listener.h"
#include "xml_listener.h"
#include "cute_runner.h"

void testAddSendero()
{
	Ruta ruta = Ruta();
	int sendero = 1;
	bool resultado;
	for(iterator i = ruta.getSenderos().begin(); i < ruta.getSenderos().end(); i++)
	{
			if(it->getID() == sendero)
			{
				ASSERT(resultado == true)
			}
			else
	{
				ASSERT(resultado == false)
	}
}
}

void testBorrarSendero()
{
	Ruta ruta = Ruta();
	int sendero = 1;
	bool resultado;
	for(iterator i = ruta.getSenderos().begin(); i < ruta.getSenderos().end(); i++)
	{
		if(it->getID() == sendero)
		{
			ASSERT(resultado == false)
		}
		else
		{
			ASSERT(resultado == true)
		}
}
}

void testAddRuta()
{
	Ruta ruta = Ruta();
	String auxCadena;
	int IDruta;
	bool resultado;
	ofstream aux;
	string nomFich = “Rutas.txt”;
	ifstream fich(nom_fich.c_str());
	while(getline(fich, auxCadena, ‘\n’)
	{
		if(stoi(auxCadena) == IDruta)
		{
			ASSERT(resultado == true)
		}
	}
		if(resultado != true)
		{
			ASSERT(resultado == false)
		}
}

void testBorrarRuta()
{
	Ruta ruta = Ruta();
	String auxCadena;
	int IDruta;
	bool resultado;
	ofstream aux;
	string nomFich = “Rutas.txt”;
	ifstream fich(nom_fich.c_str());
	while(getline(fich, auxCadena, ‘\n’)
	{
		if(stoi(auxCadena) == IDruta)
		{
			ASSERT(resultado == false)
		}
	}
	if(resultado != false)
	{
		ASSERT(resultado == true)
	}
}

bool runAllTests(int argc, char const *argv[]) {
	cute::suite s { };
	//TODO add your test here
	s.push_back(CUTE(testAddSendero));
	s.push_back(CUTE(testBorrarSendero));
	s.push_back(CUTE(testAddRuta));
	s.push_back(CUTE(testBorrarRuta));
	cute::xml_file_opener xmlfile(argc, argv);
	cute::xml_listener<cute::ide_listener<>> lis(xmlfile.out);
	auto runner = cute::makeRunner(lis, argc, argv);
	bool success = runner(s, "AllTests");
	return success;
}

int main(int argc, char const *argv[]) {
    return runAllTests(argc, argv) ? EXIT_SUCCESS : EXIT_FAILURE;
}
