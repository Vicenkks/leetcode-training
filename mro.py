class Persona():
    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad
    def ne(self):
        print(f"""Nombre del estudiante: {self.nombre}
Edad: {self.edad}""")

class Estudiante(Persona):
    def __init__(self, nombre, edad, grado):
        super().__init__(nombre, edad)
        self.grado = grado

    def grad(self):
        print(f"Grado: {self.grado}")

est = Estudiante("Vicente", 24, 1)

est.ne()
est.grad()