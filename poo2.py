class Estudiante():
    def __init__(self, nombre, edad, grado):
        self.nombre = nombre
        self.edad = edad
        self.grado = grado
    def estudiar(self):
        print(f"El estudiante {self.nombre} esta estudiando")

nombre = input("Ingrese su nombre: ")
edad = input("Ingrese su edad: ")
grado = input("Ingrese su grado: ")

Estudiante1 = Estudiante(nombre, edad, grado)

print(f"""DATOS DEL ESTUDIANTE:
          NOMBRE: {Estudiante1.nombre}
          EDAD: {Estudiante1.edad}
          GRADO: {Estudiante1.grado}""")

while True:
    funcion = input("")
    if funcion.lower() == "estudiar":
        Estudiante1.estudiar()
        break