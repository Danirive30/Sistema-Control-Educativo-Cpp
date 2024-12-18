#include <iostream>
#include <list>
#include <locale.h>
#include <stdio.h>
#include <string>

using namespace std;

class Persona
{ // Inicia superclase Persona
private:
    int clavereg;
    string nombre;
    string direccion;
    string sexo;
    string edad;

public:
    Persona() {}
    Persona(int clavereg, string nombre, string direccion, string sexo, string edad)
    {
        setclavereg(clavereg);
        setnombre(nombre);
        setdireccion(direccion);
        setsexo(sexo);
        setedad(edad);
    }

    // Métodos modificadores
    void setclavereg(int clave) { clavereg = clave; }
    void setnombre(string nom) { nombre = nom; }
    void setdireccion(string dir) { direccion = dir; }
    void setsexo(string se) { sexo = se; }
    void setedad(string ed) { edad = ed; }

    void setDatos()
    {
        cout << "Ingrese clave de registro: ";
        cin >> clavereg;
        cin.ignore(); // Limpiar el buffer de entrada
        cout << "Ingrese el nombre        : ";
        getline(cin, nombre); // Usar getline para permitir espacios en el nombre
        cout << "Ingrese la direccion     : ";
        getline(cin, direccion);
        cout << "Ingrese el sexo          : ";
        getline(cin, sexo);
        cout << "Ingrese la edad          : ";
        getline(cin, edad);

        setclavereg(clavereg);
        setnombre(nombre);
        setdireccion(direccion);
        setsexo(sexo);
        setedad(edad);
    }
    // Métodos accesores
    int getclavereg() { return clavereg; }
    string getnombre() { return nombre; }
    string getdireccion() { return direccion; }
    string getsexo() { return sexo; }
    string getedad() { return edad; }

    void mostrarPersona()
    {
        cout << "Clave registro: " << getclavereg() << endl;
        cout << "Nombre        : " << getnombre() << endl;
        cout << "Direccion     : " << getdireccion() << endl;
        cout << "Sexo          : " << getsexo() << endl;
        cout << "Edad          : " << getedad() << endl;
    }
}; // Finaliza la superclase Persona que funcionará como un molde

// Inicio de la subclase Profesor
class Profesor : public Persona
{
private:
    int cedula;

public:
    Profesor() {}
    Profesor(int cedula, int clavereg, string nombre, string direccion, string sexo, string edad) : Persona(clavereg, nombre, direccion, sexo, edad)
    {
        setcedula(cedula);
    }

    // Métodos modificadores
    void setcedula(int cedula) { this->cedula = cedula; }

    void setDatoscedula()
    {
        cout << "Ingrese la cedula: ";
        cin >> cedula;
        setcedula(cedula);
    }

    // Métodos accesores
    int getcedulaProf() { return cedula; }

    void mostrarcedula()
    {
        cout << "La cedula es: " << getcedulaProf() << endl;
    }

}; // fin de la subclase Profesor

// Inicio clase Materia
class Materia
{
private:
    int idMateria;
    string nombreMateria;
    string nombreProfesor;

public:
    Materia() {}
    Materia(int idMateria, string nombreMateria, string nombreProfesor)
    {
        setidMateria(idMateria);
        setnombreMateria(nombreMateria);
        setnombreProfesor(nombreProfesor);
    }

    // Métodos modificadores
    void setidMateria(int idMateria) { this->idMateria = idMateria; }
    void setnombreMateria(string nombreMateria) { this->nombreMateria = nombreMateria; }
    void setnombreProfesor(string nombreProfesor) { this->nombreProfesor = nombreProfesor; }

    void setDatosMateria()
    {
        cout << "Ingrese id de la Materia    : ";
        cin >> idMateria;
        cin.ignore(); // Limpiar el buffer de entrada
        cout << "Ingrese nombre de la Materia: ";
        getline(cin, nombreMateria);
        cout << "Ingrese nombre del Profesor : ";
        getline(cin, nombreProfesor);

        setidMateria(idMateria);
        setnombreMateria(nombreMateria);
        setnombreProfesor(nombreProfesor);
    }

    // Métodos accesores
    int getidMateria() { return idMateria; }
    string getnombreMateria() { return nombreMateria; }
    string getnombreProfesor() { return nombreProfesor; }

    void mostrarMateria()
    {
        cout << "El ID de la materia es: " << getidMateria() << endl;
        cout << "Nombre de la Materia  : " << getnombreMateria() << endl;
        cout << "Nombre del Profesor   : " << getnombreProfesor() << endl;
    }
}; // fin de la clase Materia

// Inicio de la subclase Alumno
class Alumno : public Persona
{
private:
    int idAlumno;
    string noCreditos;
    string nombreMateria1;
    string nombreMateria2;

public:
    Alumno() {}
    Alumno(int idAlumno, string noCreditos, string nombreMateria1, string nombreMateria2, int clavereg, string nombre, string direccion, string sexo, string edad) : Persona(clavereg, nombre, direccion, sexo, edad)
    {
        setidAlumno(idAlumno);
        setnoCreditos(noCreditos);
        setnombreMateria1(nombreMateria1);
        setnombreMateria2(nombreMateria2);
    }

    // Métodos modificadores
    void setidAlumno(int idAlumno) { this->idAlumno = idAlumno; }
    void setnoCreditos(string noCreditos) { this->noCreditos = noCreditos; }
    void setnombreMateria1(string nombreMateria1) { this->nombreMateria1 = nombreMateria1; }
    void setnombreMateria2(string nombreMateria2) { this->nombreMateria2 = nombreMateria2; }

    void setDatosAlumnos()
    {
        cout << "Ingrese el ID Alumno          : ";
        cin >> idAlumno;
        cin.ignore(); // Limpiar el buffer de entrada
        cout << "Ingrese los creditos          : ";
        getline(cin, noCreditos);
        cout << "Ingrese nombre de la Materia 1: ";
        getline(cin, nombreMateria1);
        cout << "Ingrese nombre de la Materia 2: ";
        getline(cin, nombreMateria2);

        setidAlumno(idAlumno);
        setnoCreditos(noCreditos);
        setnombreMateria1(nombreMateria1);
        setnombreMateria2(nombreMateria2);
    }

    // Métodos accesores
    int getidAlumno() { return idAlumno; }
    string getnoCreditos() { return noCreditos; }
    string getnombreMateria1() { return nombreMateria1; }
    string getnombreMateria2() { return nombreMateria2; }

    void mostrarAlumno()
    {
        cout << "Numero de id Alumno   : " << getidAlumno() << endl;
        cout << "Numero de los Creditos: " << getnoCreditos() << endl;
        cout << "Nombre de la Materia 1: " << getnombreMateria1() << endl;
        cout << "Nombre de la Materia 2: " << getnombreMateria2() << endl;
    }

}; // fin de la subclase Alumno

// Inicio del menú principal
int menu()
{
    int x;
    system("cls");
    cout << "<----Sistema de control---->" << endl
         << endl;
    cout << "1. Consultar Profesor" << endl;
    cout << "2. Consultar Alumno" << endl;
    cout << "3. Consultar Materia" << endl;
    cout << "4. Salir del sistema" << endl;
    cout << "Opcion-->: ";
    cin >> x;
    return x;
} // fin del menú principal

int main() // Inicio del programa
{
    // Establecer el idioma a español
    setlocale(LC_ALL, "Spanish_Spain.1252");

    list<Profesor> listProfesor;
    list<Alumno> listAlumno;
    list<Materia> listMateria;
    int idProfesor;
    int idAlumno;
    int idMateria;

    // Llenar datos de Profesores
    cout << "\nLlenar datos Profesor\n";
    for (size_t i = 0; i < 3; i++)
    {
        cout << "\nFavor de ingresar los datos del Profesor: " << i + 1 << endl;
        Profesor p1;
        p1.setDatos();
        p1.setDatoscedula();
        listProfesor.push_back(p1);
        cout << "---Profesor ingresado---\n";
    }

    // Llenar datos de Materias
    cout << "\nLlenar datos de la Materia\n";
    for (size_t i = 0; i < 4; i++)
    {
        cout << "\nFavor de ingresar los datos de la materia: " << i + 1 << endl;
        Materia Mate;
        Mate.setDatosMateria();
        listMateria.push_back(Mate);
        cout << "---Materia Ingresada---\n";
    }

    // Llenar datos de Alumnos
    cout << "\nLlenar datos del Alumno\n";
    for (size_t i = 0; i < 3; i++)
    {
        cout << "\nFavor de ingresar los datos del Alumno: " << i + 1 << endl;
        Alumno Alum1;
        Alum1.setDatos();
        Alum1.setDatosAlumnos();
        listAlumno.push_back(Alum1);
        cout << "---Alumno Ingresado---\n";
        cout << "\n";
    }

    system("pause");

    int op;
    do
    {
        system("cls");
        op = menu();
        switch (op)
        {

        case 1: // Inicio Consulta Profesor
            cout << "\n";
            cout << "Ingrese la clave del Profesor: ";
            cin >> idProfesor;
            for (Profesor &t : listProfesor) // Pasar por referencia
            {
                if (idProfesor == t.getclavereg())
                {
                    t.mostrarPersona();
                    t.mostrarcedula();
                    system("pause");
                    system("cls");
                }
            }
            break; // Fin consulta profesor

        case 2: // Inicio Consulta Alumno
            cout << "\n";
            cout << "Ingrese la clave del alumno: ";
            cin >> idAlumno;
            for (Alumno &t : listAlumno) // Pasar por referencia
            {
                if (idAlumno == t.getclavereg())
                {
                    t.mostrarPersona();
                    t.mostrarAlumno();
                    system("pause");
                    system("cls");
                }
            }
            break; // Fin consulta alumno

        case 3: // Inicio Consulta Materia
            cout << "\n";
            cout << "Ingrese el ID de la materia: ";
            cin >> idMateria;
            for (Materia &t : listMateria) // Pasar por referencia
            {
                if (idMateria == t.getidMateria())
                {
                    t.mostrarMateria();
                    system("pause");
                    system("cls");
                }
            }
            break; // Fin consulta materia
        }

    } while (op != 4);
    return 0;
} // Fin del programa
