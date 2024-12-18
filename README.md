# Sistema de Control Educativo en C++

Este proyecto es una implementación básica de un sistema de gestión educativa en C++, que permite almacenar, consultar y gestionar la información de profesores, alumnos y materias. El sistema utiliza clases para modelar a cada entidad y emplea listas para almacenar múltiples registros.

## Descripción

El sistema está diseñado para gestionar los siguientes componentes:
- **Profesor**: Almacena datos personales y una cédula de registro.
- **Alumno**: Almacena datos personales, el número de créditos y las materias inscritas.
- **Materia**: Almacena la información de cada materia, incluyendo el nombre de la materia y el nombre del profesor asignado.

El programa permite ingresar y consultar datos a través de un menú interactivo, donde el usuario puede:
1. Consultar los datos de un profesor.
2. Consultar los datos de un alumno.
3. Consultar los datos de una materia.
4. Salir del sistema.

## Tecnologías

Este proyecto está implementado en **C++** y hace uso de las siguientes características:
- Clases y objetos.
- Herencia (subclases `Profesor` y `Alumno`).
- Listas (`std::list`) para almacenar los registros.

## Instalación

Para ejecutar este proyecto en tu máquina, sigue estos pasos:

1. **Clona el repositorio**:
   ```bash
   git clone https://github.com/tu-usuario/Sistema-Control-Educativo.git
   ```

2. **Compila el código: Si estás utilizando un compilador como `g++`, compila el archivo principal `control_academico.cpp`:**:
   ```bash
   g++ control_academico.cpp -o control_academico
   ```

3. **Ejecuta el programa:**:
   ```bash
   ./control_academico.cpp
   ```

## Uso

Una vez que hayas ejecutado el programa, podrás interactuar con el menú. El sistema te pedirá ingresar datos de ejemplo para los `profesores`, `alumnos` y `materias`. Posteriormente, podrás realizar consultas utilizando las claves de registro para acceder a la información almacenada.


# Sistema-Control-Educativo-Cpp
