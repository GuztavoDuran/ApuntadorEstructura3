/*Listas Anidas*/
#include <iostream>
using namespace std;
struct Institucion{
  char nombreInstitucion [20];
  int aula;
  char turno [20];
};
struct Profesor{
  int horasClase;
  char nombreProfesor [20];
  struct Institucion Inst;
};
struct Materia{
  int semestre;
  char nombreMateria[20];
  int promedio;
  struct Profesor Prof;
};
struct Alumno{
  int clave;
  char nombreAlumno [20];
  struct Materia unidad;
};
int main(int argc, char const *argv[]) {
  /* code */
  struct Alumno estudiante1;//se inicializa la estructura
  struct Alumno *Ptr;
  Ptr =& estudiante1;
  cout << endl;
  cout << "    INICIO  " << endl;
  cout << endl;
  /*estos datos se encuentran dentro de la estructura Alumno*/

  cout << "   Clave:       " ; cin >> Ptr -> clave;
  cout << "   Nombre:      " ; cin >> Ptr -> nombreAlumno;
    fflush(stdin);
    /*Datos se encuentran dentro de la estructura Materia*/
    cout << "   Semestre:    " ; cin >> Ptr -> unidad.semestre;
    cout << "   Materia:     " ; cin >> Ptr -> unidad.nombreMateria;
    cout << "   Promedio:    " ; cin >> Ptr -> unidad.promedio;
    fflush(stdin);
      /*dato que se encuentran dentro de la estructura Profesor*/
      cout << "   horas Clase: " ; cin >> Ptr -> unidad.Prof.horasClase;
      cout << "   Nombre Prof: " ; cin >> Ptr -> unidad.Prof.nombreProfesor;
      fflush(stdin);
        /*datos que se encuentran dentro de la estructura Institucion*/
        cout << "   Institucion: " ; cin >> Ptr -> unidad.Prof.Inst.nombreInstitucion;
        cout << "   Aula:        " ; cin >> Ptr -> unidad.Prof.Inst.aula;
        cout << "   Turno:       " ; cin >> Ptr -> unidad.Prof.Inst.turno;
  /*se muestran los datos insertados*/
  cout << endl;
  cout << "\n Mostrando Datos" << endl;
  cout << endl;
  cout << "   Clave:       " << Ptr -> clave << endl;
  cout << "   Nombre:      " << Ptr -> nombreAlumno << endl;
    /*Datos se encuentran dentro de la estructura Materia*/
    cout << "   Semestre:    " << Ptr -> unidad.semestre << endl;
    cout << "   Materia:     " << Ptr -> unidad.nombreMateria << endl;
    cout << "   Promedio:    " << Ptr -> unidad.promedio << endl;
      /*dato que se encuentran dentro de la estructura Profesor*/
      cout << "   horas Clase: " << Ptr -> unidad.Prof.horasClase << endl;
      cout << "   Nombre Prof: " << Ptr -> unidad.Prof.nombreProfesor << endl;
        /*datos que se encuentran dentro de la estructura Institucion*/
        cout << "   Institucion: " << Ptr -> unidad.Prof.Inst.nombreInstitucion << endl;
        cout << "   Aula:        " << Ptr -> unidad.Prof.Inst.aula << endl;
        cout << "   Turno:       " << Ptr -> unidad.Prof.Inst.turno << endl;
  cin.get();
  return 0;
}
