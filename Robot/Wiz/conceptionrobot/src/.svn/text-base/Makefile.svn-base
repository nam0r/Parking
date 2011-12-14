CFLAGS=-g
LDFLAGS=-g

all: Application.o EnRoute.o EtatRobot.o EtatRobotEnCharge.o EtatRobotEnChargeFaceObstacle.o EtatRobotVide.o EtatRobotVideFaceObstacle.o Fige.o Objet.o Obstacle.o Position.o Robot.o Observer.o ObserverTty.o RobotObservable.o
	g++ Application.o EnRoute.o EtatRobot.o EtatRobotEnCharge.o EtatRobotEnChargeFaceObstacle.o EtatRobotVide.o EtatRobotVideFaceObstacle.o Fige.o Objet.o Obstacle.o Position.o Robot.o Observer.o ObserverTty.o RobotObservable.o -o appli $(LDFLAGS)

Application.o: Application.cpp Robot.o
	g++ -c $< -o $@ $(CDFLAGS)

EnRoute.o: EnRoute.cpp EnRoute.h Robot.o EtatRobot.o Fige.o
	g++ -c $< -o $@ $(CDFLAGS)

EtatRobot.o: EtatRobot.cpp EtatRobot.h Robot.o Objet.o Obstacle.o Position.o
	g++ -c $< -o $@ $(CDFLAGS)

EtatRobotEnCharge.o: EtatRobotEnCharge.cpp EtatRobotEnCharge.h Robot.o EtatRobot.o
	g++ -c $< -o $@ $(CDFLAGS)

EtatRobotEnChargeFaceObstacle.o: EtatRobotEnChargeFaceObstacle.cpp EtatRobotEnChargeFaceObstacle.h EtatRobot.o EnRoute.o Singleton.h
	g++ -c $< -o $@ $(CDFLAGS)

EtatRobotVide.o: EtatRobotVide.cpp EtatRobotVide.h EtatRobotVideFaceObstacle.o Robot.o EtatRobot.o EnRoute.o
	g++ -c $< -o $@ $(CDFLAGS)

EtatRobotVideFaceObstacle.o: EtatRobotVideFaceObstacle.cpp EtatRobotVideFaceObstacle.h Robot.o EtatRobot.o EnRoute.o
	g++ -c $< -o $@ $(CDFLAGS)

Fige.o: Fige.cpp Fige.h Robot.o EtatRobot.o
	g++ -c $< -o $@ $(CDFLAGS)

Objet.o: Objet.cpp Objet.h
	g++ -c $< -o $@ $(CDFLAGS)

Obstacle.o: Obstacle.cpp Obstacle.h Objet.o
	g++ -c $< -o $@ $(CDFLAGS)

Position.o: Position.cpp Position.h
	g++ -c $< -o $@ $(CDFLAGS)

Robot.o: Robot.cpp Robot.h EtatRobotVide.o Obstacle.o Position.o Objet.o EtatRobot.o
	g++ -c $< -o $@ $(CDFLAGS)

Observer.o: Observer.cpp Observer.h Position.o Objet.o
	g++ -c $< -o $@ $(CDFLAGS)

ObserverTty.o: ObserverTty.cpp ObserverTty.h Observer.o
	g++ -c $< -o $@ $(CDFLAGS)

RobotObservable.o: RobotObservable.cpp RobotObservable.h Robot.o
	g++ -c $< -o $@ $(CDFLAGS)

clean:
	rm -f *.o appli
