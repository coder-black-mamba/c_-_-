#include "crow_all.h"
using namespace std;



// The Main Starting Point
int main(){
    crow::SimpleApp app;

    // Defining Routes
    CROW_ROUTE(app,"/")([](){
        return "Hello World";
    });

    CROW_ROUTE(app,"/sayed")([](){
        return "Hey This Is Sayed Who Wanna Be An Invetor / Rechercher /....";
    });


    // Set the port and run on multiple threds and run the app
    cout<<"Your app is running on http://localhost:8080";
    app.port(3000).multithreaded().run();
}