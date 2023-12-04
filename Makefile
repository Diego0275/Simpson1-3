bin/main : src/main.cpp
	g++ src/main.cpp -o bin/main -I include -l curses

run : bin/main
	./bin/main

# # Nombre del programa
# TARGET = programa_numerico

# # Compilador
# CXX = g++
# # Opciones de compilación
# CXXFLAGS = -Wall -Wextra -pedantic -std=c++11

# # Archivos fuente
# SOURCES = ecuacion.cpp metodo.cpp menuInicio.cpp ventana.cpp intervalo.cpp main.cpp

# # Archivos objeto generados durante la compilación
# OBJECTS = $(SOURCES:.cpp=.o)

# # Regla por defecto
# all: $(TARGET)

# # Regla de compilación
# $(TARGET): $(OBJECTS)
# 	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# # Regla para cada archivo objeto
# %.o: %.cpp
# 	$(CXX) $(CXXFLAGS) -c $< -o $@

# # Limpiar archivos intermedios y el ejecutable
# clean:
# 	rm -f $(OBJECTS) $(TARGET)