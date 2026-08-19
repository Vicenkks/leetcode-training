class Celular():
    def __init__(self, marca, modelo, camara):
        self.marca = marca
        self.modelo = modelo
        self.camara = camara

    def llamar(self):
        print(f"Estas llamando desde {self.modelo}")

celular1 = Celular("Samsung", "S23", "48MP")
print(celular1.marca)

celular1.llamar()