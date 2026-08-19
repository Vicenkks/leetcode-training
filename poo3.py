class Persona:
    def __init__(self, nombre, edad, nacionalidad):
        self.nombre = nombre
        self.edad = edad
        self.nacionalidad = nacionalidad

class Empleado:
    def __init__(self, trabajo, salario):
        self.trabajo = trabajo
        self.salario = salario

class EmpleadoArtista(Persona, Empleado):
    def __init__(self, nombre, edad, nacionalidad, habilidad, trabajo, salario):
        Persona.__init__(self, nombre, edad, nacionalidad)
        Empleado.__init__(self, salario, trabajo)
        self.habilidad = habilidad

Empleadoart = EmpleadoArtista("Juan", 23, "Chilena", "Cantar", "500000", "obrero")

herencia = issubclass(EmpleadoArtista, Empleado)
instancia = isinstance(Empleadoart, Empleado)

print(instancia)