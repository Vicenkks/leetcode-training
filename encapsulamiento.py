def decorador(funcion):
    def funciona_cambiada():
        print("Hola")
        funcion()
    return funciona_cambiada

@decorador
def chain():
    print("1.2.3.4.5.6.7")


chain()