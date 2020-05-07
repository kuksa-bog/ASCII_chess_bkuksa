#include "../includes/Controller.hpp"

void	Controller::Command() {
    ViewMenu menu;
    while (true) {
        cout << "\x1B[2J\x1B[H";
        menu.Vizual();
        int i;
        string comand;
        cout << "\033[0;32mCommand number - \033[0m";
        cin >> comand;
        cin.ignore(32767, '\n');
        std::stringstream convert(comand);
        convert >> i;
        if (!cin.good())
            exit(0);
        if (i == 1) {
            cout << "\x1B[2J\x1B[H";
            cout << "start" << endl;
            ViewGame start;
            start.StartGame();
        } else if (i == 2) {
            cout << "\x1B[2J\x1B[H";
            ViewGame load;
            load.LoadGame();
        } else if (i == 3) {
            cout << "\x1B[2J\x1B[H";
            break ;
        }
    }
}
