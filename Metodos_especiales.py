class Persona():
    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad

    def __str__(self):
        return f"Persona(nombre={self.nombre}, edad = {self.edad})"

    def __add__(self, other):
        nuevo = self.edad + other.edad
        return Persona(self.nombre + other.nombre, nuevo)


vicente = Persona("Vicente", 19)
pedro = Persona("Pedro", 20)

nueva_Persona = vicente + pedro
print(nueva_Persona.nombre)