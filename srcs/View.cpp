#include "../includes/View.hpp"

void	ViewMenu::Vizual() {
    cout << "                                                 " << endl;
    cout << "                                                 " << endl;
    cout << "\033[0;32m         ┌─────────────────────────────┐          " << endl;
    cout << "         │          << \033[0;33mMENU\033[0m\033[0;32m >>         │          " << endl;
    cout << "         ├────────────────────┬────────┤          " << endl;
    cout << "         │    \033[0;33mСommand Name\033[0m\033[0;32m    │ \033[0;33mNumber\033[0m\033[0;32m │          " << endl;
    cout << "         ├────────────────────┼────────┤          " << endl;
    cout << "         │ * \033[0;33mStart game\033[0m\033[0;32m       │   \033[0;33m1\033[0m\033[0;32m    │          " << endl;
    cout << "         ├────────────────────┼────────┤          " << endl;
    cout << "         │ * \033[0;33mLoad game\033[0m\033[0;32m        │   \033[0;33m2\033[0m\033[0;32m    │          " << endl;
    cout << "         ├────────────────────┼────────┤          " << endl;
    cout << "         │ * \033[0;33mExit\033[0m\033[0;32m             │   \033[0;33m3\033[0m\033[0;32m    │          " << endl;
    cout << "         └────────────────────┴────────┘         " << endl;
    cout << "                                                 " << endl;
    cout << "                                                 " << endl;
    cout << "                                                 \033[0m" << endl;

}

void	ViewMenuGame::Vizual() {
    cout << "                                                 " << endl;
    cout << "                                                 " << endl;
    cout << "\033[0;32m         ┌─────────────────────────────┐          " << endl;
    cout << "         │          << \033[0;33mOPTION\033[0m\033[0;32m >>       │          " << endl;
    cout << "         ├────────────────────┬────────┤          " << endl;
    cout << "         │    \033[0;33mСommand Name\033[0m\033[0;32m    │ \033[0;33mNumber\033[0m\033[0;32m │          " << endl;
    cout << "         ├────────────────────┼────────┤          " << endl;
    cout << "         │ * \033[0;33mContionue game\033[0m\033[0;32m   │   \033[0;33m1\033[0m\033[0;32m    │          " << endl;
    cout << "         ├────────────────────┼────────┤          " << endl;
    cout << "         │ * \033[0;33mRestart game\033[0m\033[0;32m     │   \033[0;33m2\033[0m\033[0;32m    │          " << endl;
    cout << "         ├────────────────────┼────────┤          " << endl;
    cout << "         │ * \033[0;33mSave game\033[0m\033[0;32m        │   \033[0;33m3\033[0m\033[0;32m    │          " << endl;
    cout << "         ├────────────────────┼────────┤          " << endl;
    cout << "         │ * \033[0;33mBack to Menu\033[0m\033[0;32m     │   \033[0;33m4\033[0m\033[0;32m    │          " << endl;
    cout << "         └────────────────────┴────────┘         " << endl;
    cout << "                                                 " << endl;
    cout << "                                                 " << endl;
    cout << "                                                 \033[0m" << endl;

}

void    ViewCheckMate::Vizual() {
    cout << "CHECK MATE !!!!!!!" << endl;
    return ;
}

void    ViewDraw::Vizual() {
    cout << "DRAW !!!!!!!" << endl;
    return ;
}

string F(const Figure& f) {
    if (f.NameFigure != "") {
        if (f.NameFigure[0] == 'W')
            return "\033[0;36m" + f.NameFigure + "\033[0m";
        return "\033[0;31m" + f.NameFigure + "\033[0m";
    }
    return f.CellColor;
}

void	ViewGame::WhiteIsMove() {
    auto m = model.GetMap();
    cout << "                        Black              " << endl;
    cout << "            A   B   C   D   E   F   G   H  " << endl;
    cout << "          ╔═══╤═══╤═══╤═══╤═══╤═══╤═══╤═══╗" << endl;
    cout << "         8║"<< F(m["A8"]) + "│" + F(m["B8"]) + "│" + F(m["C8"]) + "│" + F(m["D8"])
                            + "│" + F(m["E8"]) + "│" + F(m["F8"]) + "│" + F(m["G8"]) + "│" + F(m["H8"]) + "║8" << endl;
    cout << "          ╟───┼───┼───┼───┼───┼───┼───┼───╢" << endl;
    cout << "         7║"<< F(m["A7"]) + "│" + F(m["B7"]) + "│" + F(m["C7"]) + "│" + F(m["D7"])
                            + "│" + F(m["E7"]) + "│" + F(m["F7"]) + "│" + F(m["G7"]) + "│" + F(m["H7"]) + "║7" << endl;
    cout << "          ╟───┼───┼───┼───┼───┼───┼───┼───╢" << endl;
    cout << "         6║"<< F(m["A6"]) + "│" + F(m["B6"]) + "│" + F(m["C6"]) + "│" + F(m["D6"])
                            + "│" + F(m["E6"]) + "│" + F(m["F6"]) + "│" + F(m["G6"]) + "│" + F(m["H6"]) + "║6" << endl;
    cout << "          ╟───┼───┼───┼───┼───┼───┼───┼───╢" << endl;
    cout << "         5║"<< F(m["A5"]) + "│" + F(m["B5"]) + "│" + F(m["C5"]) + "│" + F(m["D5"])
                            + "│" + F(m["E5"]) + "│" + F(m["F5"]) + "│" + F(m["G5"]) + "│" + F(m["H5"]) + "║5" << endl;
    cout << "          ╟───┼───┼───┼───┼───┼───┼───┼───╢" << endl;
    cout << "         4║"<< F(m["A4"]) + "│" + F(m["B4"]) + "│" + F(m["C4"]) + "│" + F(m["D4"])
                            + "│" + F(m["E4"]) + "│" + F(m["F4"]) + "│" + F(m["G4"]) + "│" + F(m["H4"]) + "║4" << endl;
    cout << "          ╟───┼───┼───┼───┼───┼───┼───┼───╢" << endl;
    cout << "         3║"<< F(m["A3"]) + "│" + F(m["B3"]) + "│" + F(m["C3"]) + "│" + F(m["D3"])
                            + "│" + F(m["E3"]) + "│" + F(m["F3"]) + "│" + F(m["G3"]) + "│" + F(m["H3"]) + "║3" << endl;
    cout << "          ╟───┼───┼───┼───┼───┼───┼───┼───╢" << endl;
    cout << "         2║"<< F(m["A2"]) + "│" + F(m["B2"]) + "│" + F(m["C2"]) + "│" + F(m["D2"])
                            + "│" + F(m["E2"]) + "│" + F(m["F2"]) + "│" + F(m["G2"]) + "│" + F(m["H2"]) + "║2" << endl;
    cout << "          ╟───┼───┼───┼───┼───┼───┼───┼───╢" << endl;
    cout << "         1║"<< F(m["A1"]) + "│" + F(m["B1"]) + "│" + F(m["C1"]) + "│" + F(m["D1"])
                            + "│" + F(m["E1"]) + "│" + F(m["F1"]) + "│" + F(m["G1"]) + "│" + F(m["H1"]) + "║1" << endl;
    cout << "          ╚═══╧═══╧═══╧═══╧═══╧═══╧═══╧═══╝" << endl;
    cout << "            A   B   C   D   E   F   G   H  " << endl;
    cout << "                        White              " << endl;
    cout << "                                           " << endl;
    cout << "                                           " << endl;
    cout << " Use command 'o' -> Options                " << endl;
    cout << "      input format - a5 e5 or A5 E5        " << endl;
    cout << "                                           " << endl;
    cout << "                                           " << endl;
}

void	ViewGame::BlackIsMove() {
    auto m = model.GetMap();
    cout << "                        White              " << endl;
    cout << "            H   G   F   E   D   C   B   A  " << endl;
    cout << "          ╔═══╤═══╤═══╤═══╤═══╤═══╤═══╤═══╗" << endl;
    cout << "         1║"<< F(m["H1"]) + "│" + F(m["G1"]) + "│" + F(m["F1"]) + "│" + F(m["E1"])
                            + "│" + F(m["D1"]) + "│" + F(m["C1"]) + "│" + F(m["B1"]) + "│" + F(m["A1"]) + "║1" << endl;
    cout << "          ╟───┼───┼───┼───┼───┼───┼───┼───╢" << endl;
    cout << "         2║"<< F(m["H2"]) + "│" + F(m["G2"]) + "│" + F(m["F2"]) + "│" + F(m["E2"])
                            + "│" + F(m["D2"]) + "│" + F(m["C2"]) + "│" + F(m["B2"]) + "│" + F(m["A2"]) + "║2" << endl;
    cout << "          ╟───┼───┼───┼───┼───┼───┼───┼───╢" << endl;
    cout << "         3║"<< F(m["H3"]) + "│" + F(m["G3"]) + "│" + F(m["F3"]) + "│" + F(m["E3"])
                            + "│" + F(m["D3"]) + "│" + F(m["C3"]) + "│" + F(m["B3"]) + "│" + F(m["A3"]) + "║3" << endl;
    cout << "          ╟───┼───┼───┼───┼───┼───┼───┼───╢" << endl;
    cout << "         4║"<< F(m["H4"]) + "│" + F(m["G4"]) + "│" + F(m["F4"]) + "│" + F(m["E4"])
                            + "│" + F(m["D4"]) + "│" + F(m["C4"]) + "│" + F(m["B4"]) + "│" + F(m["A4"]) + "║4" << endl;
    cout << "          ╟───┼───┼───┼───┼───┼───┼───┼───╢" << endl;
    cout << "         5║"<< F(m["H5"]) + "│" + F(m["G5"]) + "│" + F(m["F5"]) + "│" + F(m["E5"])
                            + "│" + F(m["D5"]) + "│" + F(m["C5"]) + "│" + F(m["B5"]) + "│" + F(m["A5"]) + "║5" << endl;
    cout << "          ╟───┼───┼───┼───┼───┼───┼───┼───╢" << endl;
    cout << "         6║"<< F(m["H6"]) + "│" + F(m["G6"]) + "│" + F(m["F6"]) + "│" + F(m["E6"])
                            + "│" + F(m["D6"]) + "│" + F(m["C6"]) + "│" + F(m["B6"]) + "│" + F(m["A6"]) + "║6" << endl;
    cout << "          ╟───┼───┼───┼───┼───┼───┼───┼───╢" << endl;
    cout << "         7║"<< F(m["H7"]) + "│" + F(m["G7"]) + "│" + F(m["F7"]) + "│" + F(m["E7"])
                            + "│" + F(m["D7"]) + "│" + F(m["C7"]) + "│" + F(m["B7"]) + "│" + F(m["A7"]) + "║7" << endl;
    cout << "          ╟───┼───┼───┼───┼───┼───┼───┼───╢" << endl;
    cout << "         8║"<< F(m["H8"]) + "│" + F(m["G8"]) + "│" + F(m["F8"]) + "│" + F(m["E8"])
                            + "│" + F(m["D8"]) + "│" + F(m["C8"]) + "│" + F(m["B8"]) + "│" + F(m["A8"]) + "║8" << endl;
    cout << "          ╚═══╧═══╧═══╧═══╧═══╧═══╧═══╧═══╝" << endl;
    cout << "            H   G   F   E   D   C   B   A  " << endl;
    cout << "                        Black              " << endl;
    cout << "                                           " << endl;
    cout << "                                           " << endl;
    cout << " Use command 'o' -> Options                " << endl;
    cout << "      input format - a5 e5 or A5 E5        " << endl;
    cout << "                                           " << endl;
    cout << "                                           " << endl;
}

vector<string>    ViewHistory::IfName() {
    ifstream fin;
    vector<string> v;
    fin.exceptions(ifstream::badbit | ifstream::failbit);
    try {
        fin.open("history.txt");
        int i = 0;
        cout << "Load List:" << endl;
        while (!fin.eof()) {
            Model mod2;
            fin >> mod2;
            i++;
            cout << i << ". Load Name - " << mod2.GetName() << endl;
            v.push_back(mod2.GetName());
            if (fin.peek() == '\0')
                break ;
        }
        if (i == 0)
            cout << "Load list empty" << endl;
    } catch (const exception& ex) {
        cout << "error open/read file " << endl;
        cout << ex.what() << endl;
    }
    fin.close();
    return v;
}

void	ViewGame::SaveGame() {
    std::cout << "\x1B[2J\x1B[H";
    ViewHistory hist;
    vector<string> v = hist.IfName();
    cout << "Use command 'exit' -> back to Options" << endl;
    int i = 0;
    string name;
    while (true) {
        cout << "Give a name - ";
        cin >> name;
        cin.ignore(32767, '\n');
        if (name == "exit") {
            return ;
        }
        for (auto& s : v) {
            if (s == name) {
                i++;
                break ;
            }
        }
        if (i == 0)
            break ;
        i = 0;
    }
    this->model.SetName(name);
    cout << endl;
    ofstream fout;
    fout.exceptions(ofstream::badbit | ofstream::failbit);
    try {
        fout.open("history.txt", ofstream::app);
        fout << this->model;
    } catch (const exception& ex) {
        cout << "error open/write in file" << endl;
        cout << ex.what() << endl;
    }
    fout.close();
}

//void    ViewHistory::Vizual() {
//    ifstream fin;
//    fin.exceptions(ifstream::badbit | ifstream::failbit);
//    Model mod2;
//    try {
//        fin.open("history.txt");
//        int i = 0;
//        cout << "Load List:" << endl;
//        while (!fin.eof()) {
//            Model mod2;
//            fin >> mod2;
//            i++;
//            if (mod2.GetName()[0]) {
//                cout << i << ". Load Name - " << mod2.GetName() << endl;
//            }
//            if (fin.peek() == '\0')
//                break ;
//        }
//        if (i == 0)
//            cout << "Load list empty" << endl;
//    } catch (const exception& ex) {
//        cout << "error open/read file " << endl;
//        cout << ex.what() << endl;
//    }
//    fin.close();
//}

void	ViewGame::LoadGame() {
    std::cout << "\x1B[2J\x1B[H";
    ViewHistory hist;
    vector<string> v = hist.IfName();
    cout << "Use command 'exit' -> back to Menu" << endl;
    int i = 1;
    string name;
    while (true) {
        cout << "Give a name - ";
        cin >> name;
        cin.ignore(32767, '\n');
        if (name == "exit") {
            return ;
        }
        for (auto& s : v) {
            if (s == name) {
                i--;
                break ;
            }
        }
        if (i != 1)
            break ;
        i = 1;
    }
    ifstream fin;
    i = 0;
    fin.exceptions(ifstream::badbit | ifstream::failbit);
    try {
        fin.open("history.txt");
        while (!fin.eof()) {
            fin >> this->model;
            if (this->model.GetName() == name) {
                i++;
                break ;
            }
            if (fin.peek() == '\0')
                break ;
        }
    } catch (const exception& ex) {
        cout << "error open/read file " << i << endl;
        cout << ex.what() << endl;
    }
    fin.close();
    if (i != 0) {
        this->IfMove();
    }
}


int ValidInput(string& s1) {
    string c1 = "abcdefgh";
    string C1 = "ABCDEFGH";
    string I = "12345678";
    int i = 0;
    int b = -1;
    while (c1[i] != '\0') {
        if (s1[0] == c1[i]) {
            b = i;
            break ;
        }
        i++;
    }
    if (b == -1) {
        i = 0;
        while (C1[i] != '\0') {
            if (s1[0] == C1[i]) {
                b = i;
                break ;
            }
            i++;
        }
        if (b == -1) {
            return 0;
        }
    } else {
        s1.erase(0, 1);
        s1.insert(s1.begin(), C1[b]);
    }
    i = 0;
    b = 0;
    while (I[i] != '\0') {
        if (s1[1] == I[i]) {
            b++;
            break ;
        }
        i++;
    }
    if (b == 0) {
        return 0;
    }
    if (s1.size() != 2)
        return 0;
    return 1;
}

int     ValidInput2(const string& s1, const vector<vector<string>>& v) {
    for (auto& v1 : v) {
        for (const string& v2 : v1) {
            if (s1[0] == v2[0] && s1[1] == v2[1]) {
                cout << "Ok" << endl;
                return 1;
            }
        }
    }
    cout << "Ko" << endl;
    return 0;
}

int     ViewGame::ValidMove(string& s1, string& s2) {
    if (!ValidInput(s1) || !ValidInput(s2))
    {
        cout << s1 << " 1 " << s2 << endl;
        return 0;
    }
    cout << s1 << " 2 " << s2 << endl;

    string s3 = this->model.GetMap()[s1].NameFigure;
    string s4 = this->model.GetMap()[s2].NameFigure;

    if (this->model.GetMove() == 1 && s3[0] != 'W')
    {
        cout << "Error [ if (this->model.GetWhoseMove() == 1 && s3[0] != 'W') ]" << endl;
        return 0;
    }
    if (this->model.GetMove() == 2 && s3[0] != 'B')
    {
        cout << "Error [ if (this->model.GetWhoseMove() == 2 && s3[0] != 'B') ]" << endl;
        return 0;
    }

    if (this->model.GetMove() == 1 && s4[0] == 'W')
    {
        cout << "Error [ if (this->model.GetWhoseMove() == 1 && s4[0] == 'W') ]" << endl;
        return 0;
    }
    if (this->model.GetMove() == 2 && s4[0] == 'B')
    {
        cout << "Error [ if (this->model.GetWhoseMove() == 2 && s4[0] == 'B') ]" << endl;
        return 0;
    }

    if (ValidInput2(s2, this->model.GetMap()[s1].path) == 0)
    {
        cout << "Error ValidInput2" << endl;
        return 0;
    }

    return 1;
}

void    ViewGame::Move(string &s1, string &s2) {
    for (auto& key1 : this->model.GetMap()) {
        if (key1.first == s1) {
            for (auto& key2 : this->model.GetMap()) {
                if (key2.first == s2) {
                    if (key1.second.NameFigure[2] == 'K') {
                        if (key1.second.NameFigure[0] == 'W') {
                            this->model.SetIfCastlingWhiteKing(0);
                        } else if (key1.second.NameFigure[0] == 'B') {
                            this->model.SetIfCastlingBlackKing(0);
                        }
                    }
                    if (key1.second.NameFigure[2] == 'R') {
                        if (key1.second.NameFigure[0] == 'W') {
                            if (s2 == "A1") {
                                this->model.SetIfCastlingWhiteRookA1(0);
                            }
                            if (s2 == "H1") {
                                this->model.SetIfCastlingWhiteRookH1(0);
                            }
                        } else if (key1.second.NameFigure[0] == 'B') {
                            if (s2 == "A8") {
                                this->model.SetIfCastlingBlackRookA8(0);
                            }
                            if (s2 == "H8") {
                                this->model.SetIfCastlingBlackRookH8(0);
                            }
                        }
                    }
                    if (key1.second.NameFigure[2] == 'K' && (s1 == "E1" || s1 == "E8")
                        && (s2 == "C1" || s2 == "G1" || s2 == "C8" || s2 == "G8")) {
                        if (s1 == "E1" && s2 == "C1") {
                            this->model.GetMap()["D1"].NameFigure = this->model.GetMap()["A1"].NameFigure;
                            this->model.GetMap()["D1"].path.clear();
                            this->model.GetMap()["D1"].path = this->model.GetMap()["A1"].path;
                            this->model.GetMap()["A1"].path.clear();
                            this->model.GetMap()["A1"].NameFigure = "";
                        }
                        if (s1 == "E1" && s2 == "G1") {
                            this->model.GetMap()["F1"].NameFigure = this->model.GetMap()["H1"].NameFigure;
                            this->model.GetMap()["F1"].path.clear();
                            this->model.GetMap()["F1"].path = this->model.GetMap()["H1"].path;
                            this->model.GetMap()["H1"].path.clear();
                            this->model.GetMap()["H1"].NameFigure = "";
                        }
                        if (s1 == "E8" && s2 == "C8") {
                            this->model.GetMap()["D8"].NameFigure = this->model.GetMap()["A8"].NameFigure;
                            this->model.GetMap()["D8"].path.clear();
                            this->model.GetMap()["D8"].path = this->model.GetMap()["A8"].path;
                            this->model.GetMap()["A8"].path.clear();
                            this->model.GetMap()["A8"].NameFigure = "";
                        }
                        if (s1 == "E8" && s2 == "G8") {
                            this->model.GetMap()["F8"].NameFigure = this->model.GetMap()["H8"].NameFigure;
                            this->model.GetMap()["F8"].path.clear();
                            this->model.GetMap()["F8"].path = this->model.GetMap()["H8"].path;
                            this->model.GetMap()["H8"].path.clear();
                            this->model.GetMap()["H8"].NameFigure = "";
                        }

                    }
                    key2.second.NameFigure = key1.second.NameFigure;
                    key2.second.path.clear();
                    key2.second.path = key1.second.path;
                    key1.second.path.clear();
                    key1.second.NameFigure = "";
                    break ;
                }
            }
            break ;
        }
    }
}

int     ViewGame::IfCheckMate(int i) {
    int k = 0;
    if (i == 1) {
        for (const auto& m : this->model.GetMap()) {
            if (m.second.NameFigure[0] == 'W' && m.second.path.size())
                k++;
        }
    } else if (i == 2) {
        for (const auto& m : this->model.GetMap()) {
            if (m.second.NameFigure[0] == 'B' && m.second.path.size())
                k++;
        }
    }
    if (k == 0 && this->model.GetCheck())
        return 1;
    if (k == 0 && !this->model.GetCheck())
        return 2;
    return 0;
}

void	ViewGame::IfMove() {
    while (true) {
        string s1, s2;
        int i = this->model.GetMove();
        this->AllPathAllFigures();
        cout << "\x1B[2J\x1B[H";
        int g = IfCheckMate(i);
        if (g == 1) {
            if (i == 2)
                this->WhiteIsMove();
            else
                this->BlackIsMove();
            ViewCheckMate cm;
            cm.Vizual();
            string k;
            cout << "Tap something - ";
            cin >> k;
            cin.ignore(32767, '\n');
            return ;
        }
        else if (g == 2) {
            if (i == 2)
                this->WhiteIsMove();
            else
                this->BlackIsMove();
            ViewDraw draw;
            draw.Vizual();
            string k;
            cout << "Tap something - ";
            cin >> k;
            cin.ignore(32767, '\n');
            return ;
        }
        if (i == 1)
            this->WhiteIsMove();
        else
            this->BlackIsMove();
        if (this->model.GetCheck())
            cout << "******* CHECK!!!!!!!!!! *******" << endl;
        cout << ((i == 1) ? "<< White's move >> - " : "<< Black's move >> - ");
        cin >> s1;
        if (s1 == "o") {
            int c = 0;
            int b = 0;
            while (!b) {
                std::cout << "\x1B[2J\x1B[H";
                ViewMenuGame gmenu;
                gmenu.Vizual();
                cout << "Command number - ";
                string comand;
                cin >> comand;
                cin.ignore(32767, '\n');
                stringstream convert(comand);
                convert >> c;
                if (c == 1) {
                    b++;
                } else if (c == 2) {
                    Model mod2;
                    this->model = mod2;
                    b++;
                } else if (c == 3) {
                    this->SaveGame();
                } else if (c == 4) {
                    return ;
                }
            }
            if (b == 1)
                continue ;
        }
        cin >> s2;
        cin.ignore(32767, '\n');
        if (this->ValidMove(s1, s2)) {
            this->Move(s1, s2);
            this->model.SetCheck(1);
            this->model.SetMove(i);
            if (i == 2) {
                this->model.SetCount(this->model.GetCount());
            }
        }
    }
}

void	ViewGame::StartGame() {
    this->IfMove();
}

void    ViewGame::PawnMove(Figure &f, const string &ss) {
    string K1 = "ABCDEFGH";
    string K2 = "12345678";
    int     i1 = 0;
    int     i2 = 0;
    while (K1[i1] != '\0') {
        if (K1[i1] == ss[0])
            break ;
        i1++;
    }
    while (K2[i2] != '\0') {
        if (K2[i2] == ss[1])
            break ;
        i2++;
    }
    vector<string> v;
    int c = (f.NameFigure[0] == 'W') ? (i2 + 1) : (i2 - 1);
    if (c <= 7 && c >= 0) {
        string s1, s2;
        s1.push_back(K1[i1]);
        s1.push_back(K2[c]);
        s2 = this->model.GetMap()[s1].NameFigure;
        if (s2 == "")
        {
            cout << " 1 [" << s1 << "] " << endl;
            if (this->IfCheck(ss, s1, f.NameFigure))
                v.push_back(s1);
            if ((f.NameFigure[0] == 'W' && K2[i2] == '2') || (f.NameFigure[0] == 'B' && K2[i2] == '7')) {
                c = (f.NameFigure[0] == 'W') ? (i2 + 2) : (i2 - 2);
                s1.clear();
                s2.clear();
                s1.push_back(K1[i1]);
                s1.push_back(K2[c]);
                s2 = this->model.GetMap()[s1].NameFigure;
                if (s2 == "")
                {
                    cout << " 2 [" << s1 << "] " << endl;
                    if (this->IfCheck(ss, s1, f.NameFigure))
                        v.push_back(s1);
                }
            }
        }
    }
    if (v.size())
        f.path.push_back(v);
    v.clear();
    if (f.NameFigure[0] == 'W') {
        int c1 = i1 + 1;
        int c2 = i1 - 1;
        c = i2 + 1;
        if (c <= 7 && (c1 <= 7 || c2 >= 0)) {
            if (c1 <= 7) {
                string s1, s2;
                s1.push_back(K1[c1]);
                s1.push_back(K2[c]);
                s2 = this->model.GetMap()[s1].NameFigure;
                if (s2[0] == 'B')
                {
                    cout << " 3 [" << s1 << "] " << endl;
                    if (this->IfCheck(ss, s1, f.NameFigure))
                        v.push_back(s1);
                    if (v.size())
                        f.path.push_back(v);
                    v.clear();
                }
            }
            if (c2 >= 0) {
                string s1, s2;
                s1.push_back(K1[c2]);
                s1.push_back(K2[c]);
                s2 = this->model.GetMap()[s1].NameFigure;
                if (s2[0] == 'B')
                {
                    cout << " 4 [" << s1 << "] " << endl;
                    if (this->IfCheck(ss, s1, f.NameFigure))
                        v.push_back(s1);
                    if (v.size())
                        f.path.push_back(v);
                    v.clear();
                }
            }
        }
    } else if (f.NameFigure[0] == 'B') {
        int c1 = i1 + 1;
        int c2 = i1 - 1;
        c = i2 - 1;
        if (c >= 0 && (c1 <= 7 || c2 >= 0)) {
            if (c1 <= 7) {
                string s1, s2;
                s1.push_back(K1[c1]);
                s1.push_back(K2[c]);
                s2 = this->model.GetMap()[s1].NameFigure;
                if (s2[0] == 'W')
                {
                    cout << " 5 [" << s1 << "] " << endl;
                    if (this->IfCheck(ss, s1, f.NameFigure))
                        v.push_back(s1);
                    if (v.size())
                        f.path.push_back(v);
                    v.clear();
                }
            }
            if (c2 >= 0) {
                string s1, s2;
                s1.push_back(K1[c2]);
                s1.push_back(K2[c]);
                s2 = this->model.GetMap()[s1].NameFigure;
                if (s2[0] == 'W')
                {
                    cout << " 6 [" << s1 << "] " << endl;
                    if (this->IfCheck(ss, s1, f.NameFigure))
                        v.push_back(s1);
                    if (v.size())
                        f.path.push_back(v);
                    v.clear();
                }
            }
        }
    }
    for (auto& a : f.path) {
        for (auto& b : a) {
            cout << " [" << b << "] ";
        }
        cout << endl;
    }
    cout << "------------------------------------" << endl;
}

void    ViewGame::KnightMove(Figure &f, const string &ss) {
    string K1 = "ABCDEFGH";
    string K2 = "12345678";
    int     i1 = 0;
    int     i2 = 0;
    while (K1[i1] != '\0') {
        if (K1[i1] == ss[0])
            break ;
        i1++;
    }
    while (K2[i2] != '\0') {
        if (K2[i2] == ss[1])
            break ;
        i2++;
    }
    vector<string> v;
    int c = i1 + 2;
    int c2 = i2 + 1;
    int c3 = i2 - 1;
    if (c <= 7 && (c2 <= 7 || c3 >= 0)) {
        string s, s1, s2, s3;
        if (c <= 7 && c2 <= 7) {
            s.push_back(K1[c]);
            s.push_back(K2[c2]);
            s1 = this->model.GetMap()[s].NameFigure;
            if (s1 == "" || s1[0] != f.NameFigure[0])
            {
                cout << " 1 [" << s << "] " << endl;
                if (this->IfCheck(ss, s, f.NameFigure))
                    v.push_back(s);
            }
        }
        if (c <= 7 && c3 >= 0) {
            s2.push_back(K1[c]);
            s2.push_back(K2[c3]);
            s3 = this->model.GetMap()[s2].NameFigure;
            if (c3 >= 0 && (s3 == "" || s3[0] != f.NameFigure[0]))
            {
                cout << " 2 [" << s2 << "] " << endl;
                if (this->IfCheck(ss, s2, f.NameFigure))
                    v.push_back(s2);
            }
        }
    }
    if (v.size())
        f.path.push_back(v);
    v.clear();
    c = i1 - 2;
    c2 = i2 + 1;
    c3 = i2 - 1;
    if (c >= 0 && (c2 <= 7 || c3 >= 0)) {
        string s, s1, s2, s3;
        if (c >= 0 && c2 <= 7) {
            s.push_back(K1[c]);
            s.push_back(K2[c2]);
            s1 = this->model.GetMap()[s].NameFigure;
            if (s1 == "" || s1[0] != f.NameFigure[0])
            {
                cout << " 3 [" << s << "] " << endl;
                if (this->IfCheck(ss, s, f.NameFigure))
                    v.push_back(s);
            }
        }
        if (c >= 0 && c3 >= 0) {
            s2.push_back(K1[c]);
            s2.push_back(K2[c3]);
            s3 = this->model.GetMap()[s2].NameFigure;
            if (c3 >= 0 && (s3 == "" || s3[0] != f.NameFigure[0]))
            {
                cout << " 4 [" << s2 << "] " << endl;
                if (this->IfCheck(ss, s2, f.NameFigure))
                    v.push_back(s2);
            }
        }
    }
    if (v.size())
        f.path.push_back(v);
    v.clear();
    c = i1 + 1;
    c2 = i1 - 1;
    c3 = i2 + 2;
    if (c3 <= 7 && (c <= 7 || c2 >= 0)) {
        string s, s1, s2, s3;
        if (c <= 7 && c3 <= 7) {
            s.push_back(K1[c]);
            s.push_back(K2[c3]);
            s1 = this->model.GetMap()[s].NameFigure;
            if (s1 == "" || s1[0] != f.NameFigure[0])
            {
                cout << " 5 [" << s << "] " << endl;
                if (this->IfCheck(ss, s, f.NameFigure))
                    v.push_back(s);
            }
        }
        if (c2 >= 0 && c3 <= 7) {
            s2.push_back(K1[c2]);
            s2.push_back(K2[c3]);
            s3 = this->model.GetMap()[s2].NameFigure;
            if (c2 >= 0 && (s3 == "" || s3[0] != f.NameFigure[0]))
            {
                cout << " 6 [" << s2 << "] " << endl;
                if (this->IfCheck(ss, s2, f.NameFigure))
                    v.push_back(s2);
            }
        }
    }
    if (v.size())
        f.path.push_back(v);
    v.clear();
    c = i1 + 1;
    c2 = i1 - 1;
    c3 = i2 - 2;
    if (c3 >= 0 && (c2 >= 0 || c <= 7)) {
        string s, s1, s2, s3;
        if (c <= 7 && c3 >= 0) {
            s.push_back(K1[c]);
            s.push_back(K2[c3]);
            s1 = this->model.GetMap()[s].NameFigure;
            if ((s1 == "" || s1[0] != f.NameFigure[0]))
            {
                cout << " 7 [" << s << "] " << endl;
                if (this->IfCheck(ss, s, f.NameFigure))
                    v.push_back(s);
            }
        }
        if (c3 >= 0 && c2 >= 0) {
            s2.push_back(K1[c2]);
            s2.push_back(K2[c3]);
            s3 = this->model.GetMap()[s2].NameFigure;
            if (c2 >= 0 && (s3 == "" || s3[0] != f.NameFigure[0]))
            {

                cout << " 8 [" << s2 << "] " << endl;
                if (this->IfCheck(ss, s2, f.NameFigure))
                    v.push_back(s2);
            }
        }
    }
    if (v.size())
        f.path.push_back(v);
    for (auto& a : f.path) {
        for (auto& b : a) {
            cout << " [" << b << "] ";
        }
        cout << endl;
    }
    cout << "------------------------------------" << endl;
}

void    ViewGame::RookMove(Figure& f, const string& ss) {
    string K1 = "ABCDEFGH";
    string K2 = "12345678";
    int     i1 = 0;
    int     i2 = 0;
    while (K1[i1] != 0) {
        if (K1[i1] == ss[0])
            break ;
        i1++;
    }
    while (K2[i2] != '\0') {
        if (K2[i2] == ss[1])
            break ;
        i2++;
    }
    int c = i1;
    vector<string> v;
    while (c <= 7) {
        c++;
        if (c > 7)
            break ;
        string s, s1;
        s.push_back(K1[c]);
        s.push_back(K2[i2]);
        s1 = this->model.GetMap()[s].NameFigure;
        if (s1 == "" || s1[0] != f.NameFigure[0]) {
            cout << " 1 [" << s << "] " << endl;
            if (this->IfCheck(ss, s, f.NameFigure))
                v.push_back(s);
            if (s1 == "")
                continue ;
        }
        break ;
    }
    if (v.size())
        f.path.push_back(v);
    v.clear();
    c = i1;
    while (c >= 0) {
        c--;
        if (c < 0)
            break ;
        string s, s1;
        s.push_back(K1[c]);
        s.push_back(K2[i2]);
        s1 = this->model.GetMap()[s].NameFigure;
        if (s1 == "" || s1[0] != f.NameFigure[0]) {
            cout << " 2 [" << s << "] " << endl;
            if (this->IfCheck(ss, s, f.NameFigure))
                v.push_back(s);
            if (s1 == "")
                continue ;
        }
        break ;
    }
    if (v.size())
        f.path.push_back(v);
    v.clear();
    c = i2;
    while (c <= 7) {
        c++;
        if (c > 7)
            break ;
        string s, s1;
        s.push_back(K1[i1]);
        s.push_back(K2[c]);
        s1 = this->model.GetMap()[s].NameFigure;
        if (s1 == "" || s1[0] != f.NameFigure[0]) {
            cout << " 3 [" << s << "] " << endl;
            if (this->IfCheck(ss, s, f.NameFigure))
                v.push_back(s);
            if (s1 == "")
                continue ;
        }
        break ;
    }
    if (v.size())
        f.path.push_back(v);
    v.clear();
    c = i2;
    while (c >= 0) {
        c--;
        if (c < 0)
            break ;
        string s, s1;
        s.push_back(K1[i1]);
        s.push_back(K2[c]);
        s1 = this->model.GetMap()[s].NameFigure;
        if (s1 == "" || s1[0] != f.NameFigure[0]) {
            cout << " 4 [" << s << "] " << endl;
            if (this->IfCheck(ss, s, f.NameFigure))
                v.push_back(s);
            if (s1 == "")
                continue ;
        }
        break ;
    }
    if (v.size())
        f.path.push_back(v);
    for (auto& a : f.path) {
        for (auto& b : a) {
            cout << " [" << b << "] ";
        }
        cout << endl;
    }
    cout << "------------------------------------" << endl;
}

void    ViewGame::BishopMove(Figure &f, const string &ss) {
    string K1 = "ABCDEFGH";
    string K2 = "12345678";
    int     i1 = 0;
    int     i2 = 0;
    while (K1[i1] != '\0') {
        if (K1[i1] == ss[0])
            break ;
        i1++;
    }
    while (K2[i2] != '\0') {
        if (K2[i2] == ss[1])
            break ;
        i2++;
    }
    int c = i1;
    int c2 = i2;
    vector<string> v;
    while (c <= 7 && c2 <= 7) {
        c++;
        c2++;
        if (c > 7 || c2 > 7)
            break ;
        string s, s1;
        s.push_back(K1[c]);
        s.push_back(K2[c2]);
        s1 = this->model.GetMap()[s].NameFigure;
        if (s1 == "" || s1[0] != f.NameFigure[0]) {
            cout << " 1 [" << s << "] " << endl;
            if (this->IfCheck(ss, s, f.NameFigure))
                v.push_back(s);
            if (s1 == "")
                continue ;
        }
        break ;
    }
    if (v.size())
        f.path.push_back(v);
    v.clear();
    c = i1;
    c2 =i2;
    while (c >= 0 && c2 >= 0) {
        c--;
        c2--;
        if (c < 0 || c2 < 0)
            break ;
        string s, s1;
        s.push_back(K1[c]);
        s.push_back(K2[c2]);
        s1 = this->model.GetMap()[s].NameFigure;
        if (s1 == "" || s1[0] != f.NameFigure[0]) {
            cout << " 2 [" << s << "] " << endl;
            if (this->IfCheck(ss, s, f.NameFigure))
                v.push_back(s);
            if (s1 == "")
                continue ;
        }
        break ;
    }
    if (v.size())
        f.path.push_back(v);
    v.clear();
    c = i1;
    c2 =i2;
    while (c <= 7 && c2 >= 0) {
        c++;
        c2--;
        if (c2 < 0 || c > 7)
            break ;
        string s, s1;
        s.push_back(K1[c]);
        s.push_back(K2[c2]);
        s1 = this->model.GetMap()[s].NameFigure;
        if (s1 == "" || s1[0] != f.NameFigure[0]) {
            cout << " 3 [" << s << "] " << endl;
            if (this->IfCheck(ss, s, f.NameFigure))
                v.push_back(s);
            if (s1 == "")
                continue ;
        }
        break ;
    }
    if (v.size())
        f.path.push_back(v);
    v.clear();
    c = i1;
    c2 =i2;
    while (c >= 0 && c2 <= 7) {
        c--;
        c2++;
        if (c < 0 || c2 > 7)
            break ;
        string s, s1;
        s.push_back(K1[c]);
        s.push_back(K2[c2]);
        s1 = this->model.GetMap()[s].NameFigure;
        if (s1 == "" || s1[0] != f.NameFigure[0]) {
            cout << " 4 [" << s << "] " << endl;
            if (this->IfCheck(ss, s, f.NameFigure))
                v.push_back(s);
            if (s1 == "")
                continue ;
        }
        break ;
    }
    if (v.size())
        f.path.push_back(v);
    for (auto& a : f.path) {
        for (auto& b : a) {
            cout << " [" << b << "] ";
        }
        cout << endl;
    }
    cout << "------------------------------------" << endl;
}

void    ViewGame::KingMove(Figure &f, const string &ss) {
    string K1 = "ABCDEFGH";
    string K2 = "12345678";
    int     i1 = 0;
    int     i2 = 0;
    while (K1[i1] != '\0') {
        if (K1[i1] == ss[0])
            break ;
        i1++;
    }
    while (K2[i2] != '\0') {
        if (K2[i2] == ss[1])
            break ;
        i2++;
    }
    vector<string> v;
    int i = 0;
    while (i < 8) {
        string s1, s2;
        int cc = 0;
        int cx = 0;
        if (i == 0) {
            cc = i1 + 1;
            cx = i2;
            if (cc > 7 && ++i)
                continue ;
        } else if (i == 1) {
            cc = i1 - 1;
            cx = i2;
            if (cc < 0 && i++)
                continue ;
        } else if (i == 2) {
            cc = i1;
            cx = i2 + 1;
            if (cx > 7 && i++)
                continue ;
        } else if (i == 3) {
            cc = i1;
            cx = i2 - 1;
            if (cx < 0 && i++)
                continue ;
        } else if (i == 4) {
            cc = i1 + 1;
            cx = i2 + 1;
            if (!(cc <= 7 && cx <= 7) && i++)
                continue ;
        } else if (i == 5) {
            cc = i1 - 1;
            cx = i2 - 1;
            if (!(cx >= 0 && cc >= 0 && cx >= 0) && i++)
                continue ;
        } else if (i == 6) {
            cc = i1 + 1;
            cx = i2 - 1;
            if (!(K1[cc] != '\0' && cx >= 0 && cc <= 7) && i++)
                continue ;
        } else if (i == 7) {
            cc = i1 - 1;
            cx = i2 + 1;
            if (!(K2[cx] != '\0' && cc >= 0 && cx <= 7) && i++)
                continue ;
        }
        s1.push_back(K1[cc]);
        s1.push_back(K2[cx]);
        s2 = this->model.GetMap()[s1].NameFigure;
        if (s2 == "" || s2[0] != f.NameFigure[0])
        {
            cout << " 4 [" << s1 << "] " << endl;
            if (this->IfCheck(ss, s1, f.NameFigure))
                v.push_back(s1);
        }
        s1.clear();
        s2.clear();
        i++;
    }
    if (v.size())
        f.path.push_back(v);
    if (this->model.GetCheck() == 0) {
        int k = this->model.GetMove();
        if (k == 1 && this->model.GetIfCastlingWhiteKing() &&
            (this->model.GetIfCastlingWhiteRookA1() || this->model.GetIfCastlingWhiteRookH1())) {
            this->CastlingMove(f, i1, i2, ss);
        } else if (k == 2 && this->model.GetIfCastlingBlackKing() &&
                   (this->model.GetIfCastlingBlackRookA8() || this->model.GetIfCastlingBlackRookH8())) {
            this->CastlingMove(f, i1, i2, ss);
        }
    }
    for (auto& a : f.path) {
        for (auto& b : a) {
            cout << " [" << b << "] ";
        }
        cout << endl;
    }
    cout << "------------------------------------" << endl;
}

void    ViewGame::CastlingMove(Figure &f, int i1, int i2, const string& ss) {
    string K1 = "ABCDEFGH";
    string K2 = "12345678";
    vector<string> v;
    int cc = i1 + 1;
    if (cc <= 7 && ((f.NameFigure[0] == 'W' && this->model.GetIfCastlingWhiteRookH1())
        || (f.NameFigure[0] == 'B' && this->model.GetIfCastlingBlackRookH8()))) {
        string s1, s2;
        s1.push_back(K1[cc]);
        s1.push_back(K2[i2]);
        s2 = this->model.GetMap()[s1].NameFigure;
        if (s2 == "")
        {
            if (this->IfCheck(ss, s1, f.NameFigure)) {
                cc = i1 + 2;
                if (cc <= 7) {
                    s1.clear();
                    s2.clear();
                    s1.push_back(K1[cc]);
                    s1.push_back(K2[i2]);
                    s2 = this->model.GetMap()[s1].NameFigure;
                    if (s2 == "") {
                        cout << " 2 [" << s1 << "] " << endl;
                        if (this->IfCheck(ss, s1, f.NameFigure)) {
                            cc = i1 + 3;
                            if (cc <= 7) {
                                string s4;
                                s2.clear();
                                s4.push_back(K1[cc]);
                                s4.push_back(K2[i2]);
                                s2 = this->model.GetMap()[s4].NameFigure;
                                if (s2[2] == 'R') {
                                    v.push_back(s1);
                                    v.push_back(("cast"));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cc = i1 - 1;
    if (cc >= 0 && ((f.NameFigure[0] == 'W' && this->model.GetIfCastlingWhiteRookA1())
                    || (f.NameFigure[0] == 'B' && this->model.GetIfCastlingBlackRookA8()))) {
        string s1, s2;
        s1.push_back(K1[cc]);
        s1.push_back(K2[i2]);
        s2 = this->model.GetMap()[s1].NameFigure;
        if (s2 == "" )
        {
            if (this->IfCheck(ss, s1, f.NameFigure)) {
                cc = i1 - 2;
                if (cc >= 0) {
                    s1.clear();
                    s2.clear();
                    s1.push_back(K1[cc]);
                    s1.push_back(K2[i2]);
                    s2 = this->model.GetMap()[s1].NameFigure;
                    if (s2 == "") {
                        cout << " 2 [" << s1 << "] " << endl;
                        if (this->IfCheck(ss, s1, f.NameFigure)) {
                            cc = i1 - 3;
                            if (cc >= 0) {
                                string s4;
                                s2.clear();
                                s4.push_back(K1[cc]);
                                s4.push_back(K2[i2]);
                                s2 = this->model.GetMap()[s4].NameFigure;
                                if (s2 == "") {
                                    cc = i1 - 4;
                                    if (cc <= 7) {
                                        s4.clear();
                                        s2.clear();
                                        s4.push_back(K1[cc]);
                                        s4.push_back(K2[i2]);
                                        s2 = this->model.GetMap()[s4].NameFigure;
                                        if (s2[2] == 'R') {
                                            v.push_back(s1);
                                            v.push_back(("cast"));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (v.size())
        f.path.push_back(v);

}

//int     ViewGame::IfCheckInPath(Figure& f, const string& NameEnemy) {
//    if (f.path.size()) {
//        for (const auto& a : f.path) {
//            for (const auto& b : a) {
//                if (this->model.GetMap()[b].NameFigure == NameEnemy)
//                    return 0;
//            }
//        }
//    }
//    return 1;
//}

int     ViewGame::IfCheck(const string& OldPlaceF, const string& NewPlaceF, string& s3) {
    string s4;
    string s5;
    for (auto [key, value] : this->model.GetMap()) {
        if (s3[0] == value.NameFigure[0] && value.NameFigure[2] == 'K') {
            s4 = key;
            s5.push_back(value.NameFigure[0]);
            s5 += "|";
            break ;
        }
    }
    Figure  f;
//    string s6 = (s5[0] == 'W') ? "B|" : "W|";
    f.NameFigure = s5 + "K";
    if (this->model.GetMap()[OldPlaceF].NameFigure == f.NameFigure) {
        s4 = NewPlaceF;
    }
    this->PawnMove_vs_King(f, s4, OldPlaceF, NewPlaceF);
    if (f.path.size()) {
        return 0;
    }
    f.path.clear();
    this->RookMove_vs_King(f, s4, OldPlaceF, NewPlaceF);
    if (f.path.size()) {
        return 0;
    }
    f.path.clear();
    this->BishopMove_vs_King(f, s4, OldPlaceF, NewPlaceF);
    if (f.path.size()) {
        return 0;
    }
    f.path.clear();
    this->KnightMove_vs_King(f, s4, OldPlaceF, NewPlaceF);
    if (f.path.size()) {
        return 0;
    }
    f.path.clear();
    if (OldPlaceF != NewPlaceF && this->model.GetMap()[OldPlaceF].NameFigure == f.NameFigure) {
        this->KingMove_vs_King(f, s4, OldPlaceF, NewPlaceF);
        if (f.path.size()) {
            return 0;
        }
    }
    return 1;
}

void	ViewGame::AllPathAllFigures() {
    for (auto& m : this->model.GetMap()) {
        if (m.second.NameFigure == "")
            continue ;
        else {
            cout << "------------------------------------" << endl;
            cout << "[" << m.first << "] [" << m.second.NameFigure << "]  [" << m.second.CellColor << "]" << endl;
            if (m.second.NameFigure[2] == 'R') {
                m.second.path.clear();
                this->RookMove(m.second, m.first);
            } else if (m.second.NameFigure[2] == 'B') {
                m.second.path.clear();
                this->BishopMove(m.second, m.first);
            } else if (m.second.NameFigure[2] == 'N') {
                m.second.path.clear();
                this->KnightMove(m.second, m.first);
            } else if (m.second.NameFigure[2] == 'Q') {
                m.second.path.clear();
                this->RookMove(m.second, m.first);
                this->BishopMove(m.second, m.first);
            } else if (m.second.NameFigure[2] == 'K') {
                m.second.path.clear();
                if (!this->IfCheck(m.first, m.first, m.second.NameFigure)) {
                    this->model.SetCheck(0);
                }
                this->KingMove(m.second, m.first);
            } else if (m.second.NameFigure[2] == 'P') {
                m.second.path.clear();
                this->PawnMove(m.second, m.first);
            }
        }
    }
}


