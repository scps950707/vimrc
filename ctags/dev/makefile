CSRCS = 
EX1_SRCS = tag.c
EX2_SRCS = doc.c
EXT = .c
COBJS = $(CSRCS:$(EXT)=.o)
EX1_OBJS = $(EX1_SRCS:$(EXT)=.o)
EX2_OBJS = $(EX2_SRCS:$(EXT)=.o)
EXEC1 = tags_generator
EXEC2 = docs_generator
CXX = gcc
CXXFLAGS = -Wall -std=c99
DEP = dep

all: $(EXEC1) $(EXEC2)

$(EXEC1): $(COBJS) $(EX1_OBJS)
		$(CXX) $(CXXFLAGS) -o $@ $(COBJS) $(EX1_OBJS)

$(EXEC2): $(COBJS) $(EX2_OBJS)
		$(CXX) $(CXXFLAGS) -o $@ $(COBJS) $(EX2_OBJS)

%.o:%$(EXT)
		$(CXX) $(CXXFLAGS) -c $<

dep:
		$(CXX) $(CXXFLAGS) -M $(CSRCS) $(EX1_SRCS) $(EX2_SRCS) > $(DEP)

clean:
		rm -rf *.o output $(EXEC1) $(EXEC2) $(DEP)
help:
	@echo "\ncompile:\nmake clean dep all\n"
	@echo "usage:\nchmod +x [script name]\n./[generator] < [header_list] > [script name]\n"
