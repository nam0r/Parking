CC= g++

OBJECTS= AfficheurConsole.o EtatAVide.o EtatAVideFaceObstacle.o EtatEnCharge.o EtatEnChargeFaceObstacle.o EtatEnRoute.o EtatFige.o EtatRobot.o main.o Objet.o Obstacle.o Position.o Robot.o RobotAbstrait.o

TARGET= robot

$(TARGET) : $(OBJECTS)
	$(CC) $(OBJECTS) -o $(TARGET)

AfficheurConsole.o : AfficheurConsole.cc AfficheurConsole.h Robot.h RobotObservateur.h
	$(CC) -o AfficheurConsole.o -c AfficheurConsole.cc

EtatAVide.o : etats/EtatAVide.cc etats/EtatAVide.h etats/EtatEnRoute.h 
	$(CC) -o EtatAVide.o -c etats/EtatAVide.cc

EtatAVideFaceObstacle.o : etats/EtatAVideFaceObstacle.cc etats/EtatAVideFaceObstacle.h etats/EtatEnRoute.h 
	$(CC) -o EtatAVideFaceObstacle.o -c etats/EtatAVideFaceObstacle.cc

EtatEnCharge.o : etats/EtatEnCharge.cc etats/EtatEnCharge.h etats/EtatEnRoute.h 
	$(CC) -o EtatEnCharge.o -c etats/EtatEnCharge.cc

EtatEnChargeFaceObstacle.o : etats/EtatEnChargeFaceObstacle.cc etats/EtatEnChargeFaceObstacle.h etats/EtatEnRoute.h 
	$(CC) -o EtatEnChargeFaceObstacle.o -c etats/EtatEnChargeFaceObstacle.cc

EtatEnRoute.o : etats/EtatEnRoute.cc etats/EtatEnRoute.h etats/EtatRobot.h 
	$(CC) -o EtatEnRoute.o -c etats/EtatEnRoute.cc

EtatFige.o : etats/EtatFige.cc etats/EtatFige.h etats/EtatRobot.h 
	$(CC) -o EtatFige.o -c etats/EtatFige.cc

EtatRobot.o : etats/EtatRobot.cc etats/EtatRobot.h Position.h Objet.h Obstacle.h
	$(CC) -o EtatRobot.o -c etats/EtatRobot.cc

main.o : main.cc  Position.h Objet.h Obstacle.h AfficheurConsole.h
	$(CC) -o main.o -c main.cc

Objet.o : Objet.cc Objet.h 
	$(CC) -o Objet.o -c Objet.cc

Obstacle.o : Obstacle.cc Obstacle.h 
	$(CC) -o Obstacle.o -c Obstacle.cc

Position.o : Position.cc Position.h 
	$(CC) -o Position.o -c Position.cc

Robot.o : Robot.cc Robot.h RobotAbstrait.h Position.h Objet.h Obstacle.h etats/EtatRobot.h 
	$(CC) -o Robot.o -c Robot.cc

RobotAbstrait.o : RobotAbstrait.cc RobotAbstrait.h RobotObservateur.h 
	$(CC) -o RobotAbstrait.o -c RobotAbstrait.cc

clean :
	rm -f *~ *.o $(TARGET)