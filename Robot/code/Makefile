CC= g++

OBJECTS= AfficheurConsole.o Commande.o Appel.o CommandeFiger.o CommandePeserObjet.o CommandeAvancer.o CommandeSaisir.o CommandeEvaluerObjet.o CommandeRepartir.o CommandeTourner.o CommandePoser.o EtatAVide.o EtatAVideFaceObstacle.o EtatEnCharge.o EtatEnChargeFaceObstacle.o EtatEnRoute.o EtatFige.o EtatRobot.o main.o Objet.o Obstacle.o Position.o Robot.o RobotAbstrait.o

TARGET= robot

$(TARGET) : $(OBJECTS)
	$(CC) $(OBJECTS) -o $(TARGET)

AfficheurConsole.o : AfficheurConsole.cc AfficheurConsole.h Robot.h RobotObservateur.h
	$(CC) -o AfficheurConsole.o -c AfficheurConsole.cc

Commande.o : commandes/Commande.cc commandes/Commande.h
	$(CC) -o Commande.o -c commandes/Commande.cc
	
Appel.o : commandes/Appel.cc commandes/Appel.h
	$(CC) -o Appel.o -c commandes/Appel.cc
	
CommandeFiger.o : commandes/CommandeFiger.cc commandes/CommandeFiger.h
	$(CC) -o CommandeFiger.o -c commandes/CommandeFiger.cc
	
CommandePeserObjet.o : commandes/CommandePeserObjet.cc commandes/CommandePeserObjet.h
	$(CC) -o CommandePeserObjet.o -c commandes/CommandePeserObjet.cc
	
CommandeAvancer.o : commandes/CommandeAvancer.cc commandes/CommandeAvancer.h
	$(CC) -o CommandeAvancer.o -c commandes/CommandeAvancer.cc
	
CommandeSaisir.o : commandes/CommandeSaisir.cc commandes/CommandeSaisir.h
	$(CC) -o CommandeSaisir.o -c commandes/CommandeSaisir.cc
	
CommandeEvaluerObjet.o : commandes/CommandeEvaluerObjet.cc commandes/CommandeEvaluerObjet.h
	$(CC) -o CommandeEvaluerObjet.o -c commandes/CommandeEvaluerObjet.cc
	
CommandeRepartir.o : commandes/CommandeRepartir.cc commandes/CommandeRepartir.h
	$(CC) -o CommandeRepartir.o -c commandes/CommandeRepartir.cc
	
CommandeTourner.o : commandes/CommandeTourner.cc commandes/CommandeTourner.h
	$(CC) -o CommandeTourner.o -c commandes/CommandeTourner.cc
	
CommandePoser.o : commandes/CommandePoser.cc commandes/CommandePoser.h
	$(CC) -o CommandePoser.o -c commandes/CommandePoser.cc

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
