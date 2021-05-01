#include <ncurses.h>
#include "./classes/misc.hpp"
#include "./classes/miscFunc.hpp"
#include "./classes/printer.hpp"


int main() {
    
    //Datas
    int exit = 0;


    //Structs
    struct point dimension {79, 23};    //dimensione finestra
    //setto da qua tutte le proprietà di player, inizializzo a null la lista dei mostri e dei bullets
    struct allEntityList listAllEntity {new LivingEntity({2, 22}, '@', 100, 10), NULL, NULL};

    /*
    //Objects
    Map map(&listAllEntity)                 //inizializzo la mappa (gli passo le entità)
    KeyMenager km(&listAllEntity, &map)     //inizializzo keyManager
    iteratore                               -> da pensare
    */


    initScreen();

    //game loop
    while(exit != -1) {
        /*
        da implementare
        exit = kayManager.selection()   -> prende il tasto premuto, cambia la desired position del player, crea spari
        km.checkAllMovement()           -> controlla se le entità si pussono muovere nelle desired position
        km.moveAll()                    -> aggiorna le posizioni
        km.checkInteraction()           -> controlla le iterazioni tra sparo-nemici e nemici-giocatore
        map.updateEntity()              -> cancellare gli sprite e riscriverli nei punti aggiornati
        printEverything(currentWindow, dimention)
        */
        printEverything(listAllEntity.player, dimension); //temporaneo
        loop();
    }
    
    endwin();

}