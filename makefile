CXXFLAGS := -lglut32 -lopengl32 -lglu32 -lgdi32 -lwinmm

testglu.exe : testglu.cpp
	g++ $^ -o $@ ${CXXFLAGS}

run :
	./testglu.exe