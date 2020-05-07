#ifndef VIEW_HPP
# define VIEW_HPP

#include "Model.hpp"
using namespace std;

class ViewMenu {
public:
    void	Vizual();
};

class ViewGame {
public:
    void	StartGame();
    void	LoadGame();
    void	SaveGame();
    void	IfMove();
    void    Move(string& s1, string& s2);
    int 	IfCheck(const string& s1, const string& s2, string& s3);
//    int     IfCheckInPath(Figure& f, const string& NameEnemy);
    int     IfCheckMate(int i);
//    int 	Check();
    void    AllPathAllFigures();
    int     ValidMove(string& s1, string& s2);
    void	WhiteIsMove();
    void	BlackIsMove();

    void    RookMove(Figure& f, const string& s);
    void    BishopMove(Figure& f, const string& s);
    void    KnightMove(Figure& f, const string& s);
    void    KingMove(Figure& f, const string& s);
    void    PawnMove(Figure& f, const string& s);
    void    RookMove_vs_King(Figure& f, const string& s, const string& s1, const string& s2);
    void    BishopMove_vs_King(Figure& f, const string& s, const string& s1, const string& s2);
    void    KnightMove_vs_King(Figure& f, const string& s, const string& s1, const string& s2);
    void    PawnMove_vs_King(Figure& f, const string& s, const string& s1, const string& s2);
    void    KingMove_vs_King(Figure& f, const string& s, const string& s1, const string& s2);
    void    CastlingMove(Figure& f, int i1, int i2, const string& ss);

private:
    Model	model;
};

class ViewMenuGame {
public:
    void	Vizual();
};

class ViewHistory {
public:
//    void    Vizual();
    vector<string> IfName();
};

class ViewCheckMate {
public:
    void	Vizual();
};

class ViewDraw {
public:
    void	Vizual();
};

#endif
