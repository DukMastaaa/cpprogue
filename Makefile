main: makeobj/simplemain.o makeobj/grid.o makeobj/player.o makeobj/tiletypes.o makeobj/colourconst.o makeobj/tile.o makeobj/gamemodel.o
	g++ makeobj/simplemain.o makeobj/tiletypes.o makeobj/colourconst.o makeobj/tile.o makeobj/grid.o makeobj/player.o makeobj/gamemodel.o -lncurses -o main

makeobj/simplemain.o: simplemain.cpp
	g++ -c simplemain.cpp
	mv simplemain.o makeobj

makeobj/tile.o: GridStuff/tile.cpp GridStuff/tile.h colourconst.cpp colourconst.h
	g++ -c GridStuff/tile.cpp colourconst.cpp
	mv tile.o makeobj

makeobj/tiletypes.o: GridStuff/tiletypes.cpp GridStuff/tiletypes.h GridStuff/tile.h GridStuff/tile.cpp
	g++ -c GridStuff/tiletypes.cpp GridStuff/tile.cpp
	mv tiletypes.o makeobj

makeobj/grid.o: GridStuff/grid.cpp GridStuff/grid.h GridStuff/tile.h GridStuff/tile.cpp GridStuff/tiletypes.h GridStuff/tiletypes.cpp
	g++ -c GridStuff/grid.cpp GridStuff/tile.cpp GridStuff/tiletypes.cpp
	mv grid.o makeobj

makeobj/player.o: PlayerStuff/player.cpp PlayerStuff/player.h
	g++ -c PlayerStuff/player.cpp
	mv player.o makeobj

makeobj/colourconst.o: colourconst.cpp colourconst.h
	g++ -c colourconst.cpp
	mv colourconst.o makeobj

makeobj/gamemodel.o: gamemodel.cpp gamemodel.h GridStuff/grid.cpp GridStuff/grid.h PlayerStuff/player.cpp PlayerStuff/player.h
	g++ -c gamemodel.cpp GridStuff/grid.cpp PlayerStuff/player.cpp
	mv gamemodel.o makeobj

clean:
	rm makeobj/*.o