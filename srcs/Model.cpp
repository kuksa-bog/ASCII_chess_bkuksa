#include "../includes/Model.hpp"

Model::Model() : Move(1), count(0), check(0) {
    this->IfCastlingBlackKing = 1;
    this->IfCastlingBlackRookH8 = 1;
    this->IfCastlingWhiteKing = 1;
    this->IfCastlingWhiteRookA1 = 1;
    this->IfCastlingBlackRookA8 = 1;
    this->IfCastlingWhiteRookH1 = 1;
    this->mapp = {{"A1", {"W|R", "   ", {}}}, {"A2", {"W|P", " ▒ ", {}}}, {"A3", {"", "   ", {}}}, {"A4", {"", " ▒ ", {}}},
                  {"A5", {"", "   ", {}}}, {"A6", {"", " ▒ ", {}}}, {"A7", {"B|P", "   ", {}}}, {"A8", {"B|R", " ▒ ", {}}},
                  {"B1", {"W|N", " ▒ ", {}}}, {"B2", {"W|P", "   ", {}}}, {"B3", {"", " ▒ ", {}}}, {"B4", {"", "   ", {}}},
                  {"B5", {"", " ▒ ", {}}}, {"B6", {"", "   ", {}}}, {"B7", {"B|P", " ▒ ", {}}}, {"B8", {"B|N", "   ", {}}},
                  {"C1", {"W|B", "   ", {}}}, {"C2", {"W|P", " ▒ ", {}}}, {"C3", {"", "   ", {}}}, {"C4", {"", " ▒ ", {}}},
                  {"C5", {"", "   ", {}}}, {"C6", {"", " ▒ ", {}}}, {"C7", {"B|P", "   ", {}}}, {"C8", {"B|B", " ▒ ", {}}},
                  {"D1", {"W|Q", " ▒ ", {}}}, {"D2", {"W|P", "   ", {}}}, {"D3", {"", " ▒ ", {}}}, {"D4", {"", "   ", {}}},
                  {"D5", {"", " ▒ ", {}}}, {"D6", {"", "   ", {}}}, {"D7", {"B|P", " ▒ ", {}}}, {"D8", {"B|Q", "   ", {}}},
                  {"E1", {"W|K", "   ", {}}}, {"E2", {"W|P", " ▒ ", {}}}, {"E3", {"", "   ", {}}}, {"E4", {"", " ▒ ", {}}},
                  {"E5", {"", "   ", {}}}, {"E6", {"", " ▒ ", {}}}, {"E7", {"B|P", "   ", {}}}, {"E8", {"B|K", " ▒ ", {}}},
                  {"F1", {"W|B", " ▒ ", {}}}, {"F2", {"W|P", "   ", {}}}, {"F3", {"", " ▒ ", {}}}, {"F4", {"", "   ", {}}},
                  {"F5", {"", " ▒ ", {}}}, {"F6", {"", "   ", {}}}, {"F7", {"B|P", " ▒ ", {}}}, {"F8", {"B|B", "   ", {}}},
                  {"G1", {"W|N", "   ", {}}}, {"G2", {"W|P", " ▒ ", {}}}, {"G3", {"", "   ", {}}}, {"G4", {"", " ▒ ", {}}},
                  {"G5", {"", "   ", {}}}, {"G6", {"", " ▒ ", {}}}, {"G7", {"B|P", "   ", {}}}, {"G8", {"B|N", " ▒ ", {}}},
                  {"H1", {"W|R", " ▒ ", {}}}, {"H2", {"W|P", "   ", {}}}, {"H3", {"", " ▒ ", {}}}, {"H4", {"", "   ", {}}},
                  {"H5", {"", " ▒ ", {}}}, {"H6", {"", "   ", {}}}, {"H7", {"B|P", " ▒ ", {}}}, {"H8", {"B|R", "   ", {}}}};
}

int		Model::GetCheck() const {
    return this->check;
}

int 	Model::GetMove() const {
    return this->Move;
}

int 	Model::GetCount() const {
    return this->count;
}

string 	Model::GetName() const {
    return this->name;
}

void	Model:: SetName(string& n) {
    this->name = n;
}

void	Model::SetCheck(int k) {
    this->check = (k == 1) ? 0 : 1;
}

void	Model::SetCount(int k) {
    this->count = k + 1;
}

void	Model::SetMove(int k) {
    this->Move = (k == 1) ? 2 : 1;
}

map<string, Figure>	&Model::GetMap(){
    return this->mapp;
}

map<string, Figure>	Model::GetMap2()  const{
    return this->mapp;
}

void	Model::SetIfCastlingWhiteKing(int k) {
    this->IfCastlingWhiteKing = k;
}

void	Model::SetIfCastlingBlackKing(int k) {
    this->IfCastlingBlackKing = k;
}

void	Model::SetIfCastlingWhiteRookA1(int k) {
    this->IfCastlingWhiteRookA1 = k;
}

void	Model::SetIfCastlingWhiteRookH1(int k) {
    this->IfCastlingWhiteRookH1 = k;
}

void	Model::SetIfCastlingBlackRookA8(int k) {
    this->IfCastlingBlackRookA8 = k;
}

void	Model::SetIfCastlingBlackRookH8(int k) {
    this->IfCastlingBlackRookH8 = k;
}

int 	Model::GetIfCastlingWhiteKing() const {
    return this->IfCastlingWhiteKing;
}

int 	Model::GetIfCastlingBlackKing() const {
    return this->IfCastlingBlackKing;
}

int 	Model::GetIfCastlingWhiteRookA1() const {
    return this->IfCastlingWhiteRookA1;
}

int 	Model::GetIfCastlingWhiteRookH1() const {
    return this->IfCastlingWhiteRookH1;
}

int 	Model::GetIfCastlingBlackRookA8() const {
    return this->IfCastlingBlackRookA8;
}

int 	Model::GetIfCastlingBlackRookH8() const {
    return this->IfCastlingBlackRookH8;
}

ostream&	operator<<(ostream& os, const Model& mod) {
    os << "[" << mod.GetMove() << "] [" << mod.GetCount() << "] [" << mod.GetCheck()
    << "] [" << mod.GetIfCastlingWhiteKing() << "] [" << mod.GetIfCastlingBlackKing()
    << "] [" << mod.GetIfCastlingWhiteRookA1() << "] [" << mod.GetIfCastlingWhiteRookH1()
    << "] [" << mod.GetIfCastlingBlackRookA8() << "] [" << mod.GetIfCastlingBlackRookH8()
    << "] [" << mod.GetName() << "]";
    auto m = mod.GetMap2();
    for (auto [key, value] : m) {
        os << " ["<< key << "] [" << value.NameFigure << "] [" << value.CellColor << "] ";
    }
    os << endl;
    return os;
}


istream&    operator>>(istream& is, Model& mod) {
    string	str;
    getline(is, str);
    int i = 0;
    int k = 0;
    while (str[i] != '\0' && k < 10) {
        string s1;
        while (str[i] != '[')
            i++;
        i++;
        while (str[i] != ']' && str[i]) {
            s1.push_back(str[i]);
            i++;
        }
        k++;
        if (k == 1) {
            int t;
            std::stringstream convert(s1);
            convert >> t;
            t = (t == 1) ? 2 : 1;
            mod.SetMove(t);
        }
        if (k == 2) {
            int t;
            std::stringstream convert(s1);
            convert >> t;
            mod.SetCount(t - 1);
        }
        if (k == 3) {
            int t;
            std::stringstream convert(s1);
            convert >> t;
            t = (t == 0) ? 1 : 0;
            mod.SetCheck(t);
        }
        if (k == 4) {
            int t;
            std::stringstream convert(s1);
            convert >> t;
            mod.SetIfCastlingWhiteKing(t);
        }
        if (k == 5) {
            int t;
            std::stringstream convert(s1);
            convert >> t;
            mod.SetIfCastlingBlackKing(t);
        }
        if (k == 6) {
            int t;
            std::stringstream convert(s1);
            convert >> t;
            mod.SetIfCastlingWhiteRookA1(t);
        }
        if (k == 7) {
            int t;
            std::stringstream convert(s1);
            convert >> t;
            mod.SetIfCastlingWhiteRookH1(t);
        }
        if (k == 8) {
            int t;
            std::stringstream convert(s1);
            convert >> t;
            mod.SetIfCastlingBlackRookA8(t);
        }
        if (k == 9) {
            int t;
            std::stringstream convert(s1);
            convert >> t;
            mod.SetIfCastlingBlackRookH8(t);
        }
        if (k == 10) {
            mod.SetName(s1);
        }
    }
    while (str[i]) {
        string s1;
        string s2;
        string s3;
        while (str[i] != '[')
            i++;
        i++;
        while (str[i] != ']' && str[i]) {
            s1.push_back(str[i]);
            i++;
        }
        while (str[i] != '[')
            i++;
        i++;
        while (str[i] != ']' && str[i]) {
            s2.push_back(str[i]);
            i++;
        }
        while (str[i] != '[')
            i++;
        i++;
        while (str[i] != ']' && str[i] ) {
            s3.push_back(str[i]);
            i++;
        }
        mod.mapp[s1] = {s2, s3, {}};
        while (str[i] && str[i] != '[')
            i++;
    }
    return is;
}
