
%.html: %.cpp
	em++ --std=c++11 -o $@ $<
